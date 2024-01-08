/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:27:44 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/09 00:31:10 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "DogsAndCats.hpp"

int main(void)
{
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	//const Animal *animal = new Animal();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();

	delete cat;
	delete dog;

	return 0;
}