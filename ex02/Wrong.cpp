/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:33:52 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 23:13:11 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &instance)
{
	std::cout << "WrongAnimal copy constructor." << std::endl;
	*this = instance;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &instance)
{
	std::cout << "WrongAnimal assignment operator." << std::endl;
	this->_type = instance._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor." << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Gah." << std::endl;
}

WrongCat::WrongCat():WrongAnimal()
{
	std::cout << "WrongCat default constructor." << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &instance):WrongAnimal(instance)
{
	std::cout << "WrongCat copy constructor." << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &instance)
{
	std::cout << "WrongCat assignment operator." << std::endl;
	WrongAnimal::operator=(instance);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Woem woem." << std::endl;
}
