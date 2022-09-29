/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:12:25 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/29 19:04:07 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	return ;
}

Point::Point(const float x, const float y) : x(x), y(y), xBis(x), yBis(y)
{
	return ;
}

Point::Point(const Point &copy) : x(copy.x), y(copy.y), xBis(copy.x), yBis(copy.y)
{
	return ;
}

Point	&Point::operator = (const Point &assign)
{
	(void)assign;
	return (*this);
}

Point::~Point(void)
{
	return ;
}

Fixed	Point::getFixedX(void) const
{
	return (this->xBis);
}

Fixed	Point::getFixedY(void) const
{
	return (this->yBis);
}

std::ostream	&operator << (std::ostream &out, const Point &point)
{
	out << "X : " << point.getFixedX() << " Y : " << point.getFixedY();
	return (out);
}
