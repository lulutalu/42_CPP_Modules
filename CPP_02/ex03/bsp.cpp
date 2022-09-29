/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:37:12 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/29 18:57:46 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	triangleAreaValue(const Point &p1, const Point &p2, const Point &p3)
{
	float	res;

	res = (p1.getFixedX().toFloat() - p3.getFixedX().toFloat()) * (p2.getFixedY().toFloat() - p3.getFixedY().toFloat());
	res -= (p2.getFixedX().toFloat() - p3.getFixedX().toFloat()) * (p1.getFixedY().toFloat() - p3.getFixedY().toFloat());
	return (res);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	float	a1;
	float	a2;
	float	a3;

	bool	is_neg;
	bool	is_pos;

	a1 = triangleAreaValue(point, a, b);
	a2 = triangleAreaValue(point, b, c);
	a3 = triangleAreaValue(point, c, a);

	is_neg = (a1 < 0) && (a2 < 0) && (a3 < 0);
	is_pos = (a1 > 0) && (a2 > 0) && (a3 > 0);

	return (is_neg || is_pos);
}
