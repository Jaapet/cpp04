/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 02:18:16 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/09 15:41:31 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_models[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &instance);
	MateriaSource	&operator=(MateriaSource const &instance);
	virtual ~MateriaSource();

	virtual void		learnMateria(AMateria *m);
	virtual AMateria	*createMateria(std::string const &type);
	
	//virtual AMateria	&getModel(int i);
};

#endif