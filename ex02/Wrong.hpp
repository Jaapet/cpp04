/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:33:42 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 23:14:39 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_H
# define WRONG_H

# include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &instance);
	WrongAnimal	&operator=(WrongAnimal const &instance);
	virtual ~WrongAnimal();

	void	makeSound() const;
};

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const &instance);
	WrongCat	&operator=(WrongCat const &instance);
	virtual ~WrongCat();

	void	makeSound() const;
};

#endif