/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:45:53 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/03 11:04:09 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _signed(false), _signGrade(0), _execGrade(0)
{
	std::cout << "Default Constructor of Form called" << std::endl;
	return ;
}

Form::~Form(void)
{
	return ;
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), 
	_signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	*this = copy;
}

Form	&Form::operator = (const Form &assign)
{
	if (&assign == this)
		return (*this);
	this->_signed = assign.isSigned();
	return (*this);
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), 
	_signGrade(signGrade), _execGrade(execGrade)
{
	this->_signed = false;
	try
	{
		if (this->getSignGrade() > 150 || this->getExecGrade() > 150)
			throw Form::GradeTooLowException();
		else if (this->getSignGrade() < 1 || this->getExecGrade() < 1)
			throw Form::GradeTooHighException();
	}
	catch (std::exception &except)
	{
		std::cout << except.what() << std::endl;
	}
	return ;
}

std::string		Form::getName(void) const
{
	return (this->_name);
}

bool			Form::isSigned(void) const
{
	return (this->_signed);
}

int				Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int				Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

const char		*Form::GradeTooHighException::what() const throw()
{
	return ("Form Exception : Grade too High !");
}

const char		*Form::GradeTooLowException::what() const throw()
{
	return ("Form Exception : Grade too Low !");
}

void			Form::beSigned(const Bureaucrat &obj)
{
	try
	{
		if (obj.getGrade() > this->getSignGrade())
			throw Form::GradeTooLowException();
		else
			this->_signed = true;
	}
	catch (std::exception &except)
	{
		std::cout << except.what() << std::endl;
	}
}

std::ostream	&operator << (std::ostream &out, const Form &obj)
{
	out << "Form " << obj.getName() << std::endl
		<< "Sign Grade " << obj.getSignGrade() << std::endl
		<< "Exec Grade " << obj.getExecGrade() << std::endl
		<< "Signed status " << obj.isSigned() << std::endl;
	return (out);
}
