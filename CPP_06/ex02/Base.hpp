/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:30:12 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/08 14:56:34 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>

class Base
{
	public :
		Base(void);
		virtual ~Base(void);
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
