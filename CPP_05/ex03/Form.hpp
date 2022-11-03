/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:27:38 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/03 11:02:31 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>

class Form ;
# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
	public:
		Form(void);
		virtual ~Form(void);
		Form(const Form &copy);
		Form	&operator = (const Form &assign);

		Form(std::string name, int signGrade, int execGrade);

		std::string		getName(void) const;
		bool			isSigned(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;

		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};

		void	beSigned(const Bureaucrat &obj);

		virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream	&operator << (std::ostream &out, const Form &obj);

#endif
