/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:42:03 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 23:37:06 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor." << std::endl;
}

Animal::Animal(Animal const &instance)
{
	std::cout << "Copy constructor." << std::endl;
	*this = instance;
}

Animal	&Animal::operator=(Animal const &instance)
{
	std::cout << "Assignment operator." << std::endl;
	this->_type = instance._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor." << std::endl;
}

Animal::Animal(std::string const &type):_type(type)
{
	std::cout << "Type constructor." << std::endl;
}

std::string const	&Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "Hey." << std::endl;
}
