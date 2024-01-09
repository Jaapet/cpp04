/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materias.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 01:02:05 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/09 02:54:14 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIAS_H
# define MATERIAS_H

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &instance);
	Ice	&operator=(Ice const &instance);
	virtual ~Ice();

	virtual AMateria	*clone() const;
	virtual void		use(ICharacter& target);
};

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &instance);
	Cure	&operator=(Cure const &instance);
	virtual ~Cure();

	virtual AMateria	*clone() const;
	virtual void		use(ICharacter& target);
};

#endif