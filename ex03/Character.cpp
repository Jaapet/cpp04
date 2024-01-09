/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 01:31:00 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/09 15:40:27 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character():_name("null"),_inventory()
{
	std::cout << "Character default constructor." << std::endl;
}

Character::Character(Character const &instance)//
{
	std::cout << "Character copy constructor." << std::endl;
	this->_name = instance._name;
	for (int i = 0; i < 4; i++)
	{
		if (instance._inventory[i])
			this->_inventory[i] = instance._inventory[i]->clone();
	}
}

Character	&Character::operator=(Character const &instance)//
{
	std::cout << "Character assignment operator." << std::endl;
	this->_name = instance._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (instance._inventory[i])
			this->_inventory[i] = instance._inventory[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character::Character(std::string const &name):_name(name),_inventory()
{
	std::cout << "Character name constructor." << std::endl;
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	delete m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (0 <= idx && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
