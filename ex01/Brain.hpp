/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:20:52 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 23:35:34 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
protected:
	std::string	_ideas[100];
public:
	Brain();
	Brain(Brain const &instance);
	Brain	&operator=(Brain const &instance);
	~Brain();
};

#endif