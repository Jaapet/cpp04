/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:33:47 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/09 15:51:53 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Materias.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource *src = new MateriaSource();
	MateriaSource *foo;
	ICharacter *me = new Character("me");
	ICharacter *bob = new Character("bob");
	Character *bar;
	AMateria *tmp1;
	AMateria *tmp2;

	std::cout << "--------------Cannot create the materia yet" << std::endl;

	tmp1 = src->createMateria("ice");

	if (tmp1 != NULL)
		return 1;

	std::cout << "--------------Cannot create the materia at all" << std::endl;

	tmp1 = src->createMateria("notamateria");

	if (tmp1 != NULL)
		return 1;

	std::cout << "--------------Normal learn, create, use" << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "--------------Invalid indexes (out of range or unfilled)" << std::endl;

	me->use(-1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	std::cout << "--------------Normal unequip" << std::endl;

	me->unequip(0);
	me->unequip(1);

	std::cout << "--------------Fill MateriaSource templates and try to learn more than max size of 4" << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(tmp1);
	src->learnMateria(tmp2);

	std::cout << "--------------Invalid indexes (out of range or unfilled)" << std::endl;

	me->unequip(-1);
	me->unequip(2);
	me->unequip(3);
	me->unequip(4);

	std::cout << "--------------Fill Character inventory and try to equip more than max size of 4" << std::endl;

	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	std::cout << "--------------MateriaSource deep copy" << std::endl;
/*
for (int i = 0; i < 4; i++)
{
	std::cout << src->getModel(i).getType() << std::endl;
}*/
	foo = new MateriaSource(*dynamic_cast<MateriaSource *>(src));

	delete foo->createMateria("ice");
	delete foo->createMateria("cure");

	std::cout << "--------------Character deep copy" << std::endl;

	bar = new Character(*dynamic_cast<Character *>(me));

	bar->use(0, *bob);
	bar->use(1, *bob);
	bar->use(2, *bob);
	bar->use(3, *bob);

	delete bar;
	delete bob;
	delete me;
	delete foo;
	delete src;

	return 0;
}