/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:27:44 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 23:14:12 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "DogsAndCats.hpp"
#include "Wrong.hpp"

int main()
{
	const Animal		*meta = new Animal();
	const Animal		*i = new Dog();
	const Animal		*j = new Cat();
	const WrongAnimal	*k = new WrongCat();

	i->makeSound();
	j->makeSound();
	k->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	delete k;

	return 0;
}