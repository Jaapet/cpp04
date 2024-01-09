/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:35:43 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/09 03:01:09 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria();
	AMateria(AMateria const &instance);
	AMateria	&operator=(AMateria const &instance);
	virtual ~AMateria();

	AMateria(std::string const &type);

	std::string const	&getType() const; //Returns the materia type

	virtual AMateria*	clone() const = 0;
	virtual void	use(ICharacter& target) = 0;
};

#endif