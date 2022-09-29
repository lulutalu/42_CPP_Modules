/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:12:33 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/29 19:04:10 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;
		Fixed		xBis;
		Fixed		yBis;
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &copy);
		~Point(void);

		Point	&operator = (const Point &assign);
		Fixed	getFixedX(void) const;
		Fixed	getFixedY(void) const;
};

std::ostream	&operator << (std::ostream &out, const Point &point);
float	triangleAreaValue(const Point &p1, const Point &p2, const Point &p3);
bool	bsp(const Point a, const Point b, const Point c, const Point point);

#endif
