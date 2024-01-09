/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materias.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 01:02:13 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/09 01:33:55 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materias.hpp"

Ice::Ice():AMateria("ice")
{
	std::cout << "Ice default constructor." << std::endl;
}

Ice::Ice(Ice const &instance):AMateria(instance)
{
	std::cout << "Ice copy constructor." << std::endl;
}

Ice	&Ice::operator=(Ice const &instance)
{
	std::cout << "Ice assignment operator." << std::endl;
	AMateria::operator=(instance);
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor." << std::endl;
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Cure::Cure():AMateria("cure")
{
	std::cout << "Cure default constructor." << std::endl;
}

Cure::Cure(Cure const &instance):AMateria(instance)
{
	std::cout << "Cure copy constructor." << std::endl;
}

Cure	&Cure::operator=(Cure const &instance)
{
	std::cout << "Cure assignment operator." << std::endl;
	AMateria::operator=(instance);
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor." << std::endl;
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
