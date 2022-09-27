/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:26:29 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/27 21:13:38 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
	private:
		int					numberValue;
		static const int	nbFractionalBits = 8;
	public:
		Fixed(void);
		Fixed(Fixed &copy);
		~Fixed(void);

		Fixed	&operator = (const Fixed &assign);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
