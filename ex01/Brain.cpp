/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:21:00 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 23:35:27 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor." << std::endl;
}

Brain::Brain(Brain const &instance)
{
	std::cout << "Brain copy constructor." << std::endl;
	*this = instance;
}

Brain	&Brain::operator=(Brain const &instance)
{
	std::cout << "Brain assignment operator." << std::endl;
	std::copy(instance._ideas, instance._ideas + 100, this->_ideas);
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor." << std::endl;
}
