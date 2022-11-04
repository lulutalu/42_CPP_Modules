/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:18:57 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/04 11:37:55 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : _content(0) {}

Data::~Data(void) {}

Data::Data(const Data &copy) {
	*this = copy;
}

Data		&Data::operator = (const Data &assign) {
	if (this == &assign)
		return (*this);
	this->setContent(assign.getContent());
	return (*this);
}

void		Data::setContent(int newContent) {
	this->_content = newContent;
}

int			Data::getContent(void) const {
	return (this->_content);
}

uintptr_t	serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}
