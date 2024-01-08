/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogsAndCats.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:33:52 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 23:00:00 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogsAndCats.hpp"

Dog::Dog():Animal()
{
	std::cout << "Dog default constructor." << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &instance):Animal(instance)
{
	std::cout << "Dog copy constructor." << std::endl;
}

Dog	&Dog::operator=(Dog const &instance)
{
	std::cout << "Dog assignment operator." << std::endl;
	Animal::operator=(instance);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof woof." << std::endl;
}

Cat::Cat():Animal()
{
	std::cout << "Cat default constructor." << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &instance):Animal(instance)
{
	std::cout << "Cat copy constructor." << std::endl;
}

Cat	&Cat::operator=(Cat const &instance)
{
	std::cout << "Cat assignment operator." << std::endl;
	Animal::operator=(instance);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow." << std::endl;
}
