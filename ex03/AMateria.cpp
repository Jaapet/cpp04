/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:36:27 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/09 01:01:48 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor." << std::endl;
}

AMateria::AMateria(AMateria const &instance)
{
	std::cout << "AMateria copy constructor." << std::endl;
	*this = instance;
}

AMateria	&AMateria::operator=(AMateria const &instance)
{
	std::cout << "AMateria assignment operator." << std::endl;
	this->_type = instance._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor." << std::endl;
}

AMateria::AMateria(std::string const &type):_type(type)
{
	std::cout << "AMateria type constructor." << std::endl;
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}