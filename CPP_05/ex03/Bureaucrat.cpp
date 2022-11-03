/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:48:33 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/03 10:11:08 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Default Constructor of Bureaucrat called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &assign)
{
	this->_grade = assign.getGrade();
	return (*this);
}

Bureaucrat::Bureaucrat(std::string _newName, int _newGrade) : _name(_newName), _grade(_newGrade)
{
	try
	{
		if (this->getGrade() < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (this->getGrade() > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception &except)
	{
		std::cout << except.what() << std::endl;
	}
	return ;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The Grade of this Bureaucrat is too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The Grade of this Bureaucrat is too low");
}

void		Bureaucrat::incrementGrade(void)
{
	try
	{
		if (this->getGrade() <= 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (std::exception &except)
	{
		std::cout << except.what() << std::endl;
	}
}

void		Bureaucrat::decrementGrade(void)
{
	try
	{
		if (this->getGrade() >= 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (std::exception &except)
	{
		std::cout << except.what() << std::endl;
	}
}

void		Bureaucrat::signForm(Form &obj)
{
	if (obj.isSigned() == true)
		std::cout << "Bureaucrat " << this->getName() << " couldn't signed Form " << obj.getName() << " because it's already signed" << std::endl;
	else
	{
		obj.beSigned(*this);
		if (obj.isSigned() == true)
			std::cout << "Bureaucrat " << this->getName() << " signed Form " << obj.getName() << std::endl;
		else
			std::cout << "Bureaucrat " << this->getName() << " couldn't signed Form " << obj.getName() << " because is grade is not sufficient" << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const &obj)
{
	if (this->getGrade() <= obj.getExecGrade())
		obj.execute(*this);
	else
		std::cout << "Error ! " << this->getName() << " grade is insufficient to execute " << obj.getName() << std::endl;
}

std::ostream	&operator << (std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade : " << obj.getGrade() << std::endl;
	return (out);
}
