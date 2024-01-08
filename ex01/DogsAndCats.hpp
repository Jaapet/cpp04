/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogsAndCats.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:33:42 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 23:39:31 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGSANDCATS_H
# define DOGSANDCATS_H

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*_brain;
public:
	Dog();
	Dog(Dog const &instance);
	Dog	&operator=(Dog const &instance);
	virtual ~Dog();

	virtual void	makeSound() const;
};

class Cat : public Animal
{
private:
	Brain	*_brain;
public:
	Cat();
	Cat(Cat const &instance);
	Cat	&operator=(Cat const &instance);
	virtual ~Cat();

	virtual void	makeSound() const;
};

#endif