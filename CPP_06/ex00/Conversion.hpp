/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:08:06 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/03 19:19:38 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <limits>
# include <cctype>
# include <iomanip>

class Conversion
{
	private :
		char	_char;
		int		_int;
		float	_float;
		double	_double;
	public :

		////////////////////////////////////////////////////////////////////////
		//						Constructor and Destructor					  //
		////////////////////////////////////////////////////////////////////////
		Conversion(void);
		~Conversion(void);
		Conversion(const Conversion &copy);
		Conversion	&operator = (const Conversion &assign);
		////////////////////////////////////////////////////////////////////////
		//							Execution Functions						  //
		////////////////////////////////////////////////////////////////////////
		bool	isStringNan(char *str);
		bool	isStringInf(char *str);
		////////////////////////////////////////////////////////////////////////
		//							Conversion Functions					  //
		////////////////////////////////////////////////////////////////////////
		int		stringToChar(void);
		int		stringToInt(char *str);
		int		stringToFloat(char *str);
		int		stringToDouble(char *str);
		////////////////////////////////////////////////////////////////////////
		//								Setters					  			  //
		////////////////////////////////////////////////////////////////////////
		void	setChar(char newChar);
		void	setInt(int newInt);
		void	setFloat(float newFloat);
		void	setDouble(double newDouble);
		////////////////////////////////////////////////////////////////////////
		//								Getters								  //
		////////////////////////////////////////////////////////////////////////
		char	getChar(void) const;
		int		getInt(void) const;
		float	getFloat(void) const;
		double	getDouble(void) const;
};

#endif
