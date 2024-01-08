/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:41:52 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/09 00:16:55 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
protected:
	std::string	_type;
public:
	Animal();
	Animal(Animal const &instance);
	Animal	&operator=(Animal const &instance);
	virtual ~Animal();

	Animal(std::string const &type);

	std::string const	&getType() const;

	virtual void	makeSound() const = 0;
};

#endif