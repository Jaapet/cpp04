/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 02:18:13 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/09 15:41:46 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource():_models()
{
	std::cout << "MateriaSource default constructor." << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &instance)//
{
	std::cout << "MateriaSource copy constructor." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (instance._models[i])
			this->_models[i] = instance._models[i]->clone();
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &instance)//
{
	std::cout << "MateriaSource assignment operator." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_models[i])
			delete this->_models[i];
		if (instance._models[i])
			this->_models[i] = instance._models[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_models[i])
			delete this->_models[i];
	}
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_models[i])
		{
			this->_models[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_models[i] && this->_models[i]->getType() == type)
			return this->_models[i]->clone();
	}
	return (0);
}
/*
AMateria	&MateriaSource::getModel(int i)
{
	return (*this->_models[i]);
}*/