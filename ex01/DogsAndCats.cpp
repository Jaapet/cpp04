/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogsAndCats.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:33:52 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 23:59:28 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogsAndCats.hpp"

Dog::Dog():Animal()
{
	std::cout << "Dog default constructor." << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &instance):Animal(instance)
{
	std::cout << "Dog copy constructor." << std::endl;
	this->_brain = new Brain(*instance._brain);
}

Dog	&Dog::operator=(Dog const &instance)
{
	std::cout << "Dog assignment operator." << std::endl;
	Animal::operator=(instance);
	*this->_brain = *instance._brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor." << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "Woof woof." << std::endl;
}

Cat::Cat():Animal()
{
	std::cout << "Cat default constructor." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &instance):Animal(instance)
{
	std::cout << "Cat copy constructor." << std::endl;
	this->_brain = new Brain(*instance._brain);
}

Cat	&Cat::operator=(Cat const &instance)
{
	std::cout << "Cat assignment operator." << std::endl;
	Animal::operator=(instance);
	*this->_brain = *instance._brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor." << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow." << std::endl;
}
