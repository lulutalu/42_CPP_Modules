/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:43:16 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/31 18:14:23 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat ;
# include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat	&operator = (const Bureaucrat &assign);

		Bureaucrat(std::string _newName, int _newGrade);

		std::string	getName(void) const;
		int			getGrade(void) const;

		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};

		void		incrementGrade(void);
		void		decrementGrade(void);

		void		signForm(Form &obj);
};

std::ostream	&operator << (std::ostream &out, const Bureaucrat &obj);

#endif
