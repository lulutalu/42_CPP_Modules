/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:11:51 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/04 10:13:18 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

////////////////////////////////////////////////////////////////////////////////
//							Constructor and Destructor					  	  //
////////////////////////////////////////////////////////////////////////////////
Conversion::Conversion(void) : _char('\0'), _int(0), _float(0.0f), _double(0.0) {}

Conversion::~Conversion(void) {}

Conversion::Conversion(const Conversion &copy)
{
	*this = copy;
}

Conversion		&Conversion::operator = (const Conversion &assign)
{
	if (this == &assign)
		return (*this);
	this->setChar(assign.getChar());
	this->setInt(assign.getInt());
	this->setFloat(assign.getFloat());
	this->setDouble(assign.getDouble());
	return (*this);
}
////////////////////////////////////////////////////////////////////////////////
//								Execution Functions						  	  //
////////////////////////////////////////////////////////////////////////////////
bool	Conversion::isStringNan(char *str)
{
	std::string	arg;
	size_t		i = 0;
	bool		dot = false;

	arg = static_cast<std::string>(str);
	if (arg == "nan" || arg == "nanf")
		return (true);
	else {
		if (str[i] == '-' || str[i] == '+')
			i++;
		while (str[i]) {
			if (str[i] == '.') {
				if (dot)
					return (true);
				dot = true;
			}
			else if (str[i] == 'f' && i == (arg.length() - 1)) {
				return (false);
			}
			else if (!isdigit(str[i]))
				return (true);
			i++;
		}
	}
	return (false);
}

bool	Conversion::isStringInf(char *str)
{
	std::string	arg;

	arg = static_cast<std::string>(str);
	if (arg == "-inff" || arg == "-inf" || arg == "+inff" || arg == "+inf")
		return (true);
	return (false);
}

void	Conversion::stringModifier(char *str)
{
	int	i = 0;

	while (i < (int)strlen(str) - 1)
		i++;
	if (str[i] == 'f')
		str[i] = '\0';
}
////////////////////////////////////////////////////////////////////////////////
//								Conversion Functions					  	  //
////////////////////////////////////////////////////////////////////////////////
int		Conversion::stringToChar(void)
{
	if (!(this->getInt() >= 32 && this->getInt() <= 127))
		return (1);
	else
		this->setChar(this->getInt());
	return (0);
}

int		Conversion::stringToInt(char *str)
{
	int		res;
	long	checker;

	{
		std::stringstream	ss;
		ss.str(str);
		ss >> checker;
	}
	if (checker > std::numeric_limits<int>::max() || checker < std::numeric_limits<int>::min())
		return (1);
	{
		std::stringstream	ss;
		ss.str(str);
		ss >> res;
	}
	this->setInt(res);
	return (0);
}

int		Conversion::stringToFloat(char *str)
{
	float				res;
	std::stringstream	ss;

	ss.str(str);
	ss >> res;
	this->setFloat(res);
	return (0);
}

int		Conversion::stringToDouble(char *str)
{
	double				res;
	std::stringstream	ss;

	ss.str(str);
	ss >> res;
	this->setDouble(res);
	return (0);
}
////////////////////////////////////////////////////////////////////////////////
//									Setters					  	  			  //
////////////////////////////////////////////////////////////////////////////////
void	Conversion::setChar(char newChar) {
	this->_char = newChar;
}

void	Conversion::setInt(int newInt) {
	this->_int = newInt;
}

void	Conversion::setFloat(float newFloat) {
	this->_float = newFloat;
}

void	Conversion::setDouble(double newDouble) {
	this->_double = newDouble;
}
////////////////////////////////////////////////////////////////////////////////
//									Getters					  	  			  //
////////////////////////////////////////////////////////////////////////////////
char	Conversion::getChar(void) const {
	return (this->_char);
}

int		Conversion::getInt(void) const {
	return (this->_int);
}

float	Conversion::getFloat(void) const {
	return (this->_float);
}

double	Conversion::getDouble(void) const {
	return (this->_double);
}
