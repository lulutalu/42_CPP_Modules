/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:27:38 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/31 18:14:22 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <iostream>

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private :
		std::string		_target;
	public :
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm	&operator = (const RobotomyRequestForm &assign);

		RobotomyRequestForm(std::string target);

		std::string		getTarget(void) const;
		void					changeStatus(void);

		void	execute(Bureaucrat const &executor) const;
};

#endif
