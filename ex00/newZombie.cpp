/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:16:17 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/21 21:26:54 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//creates a zombie, name it, and return it so you can use it outside of the function scope.
Zombie* newZombie(std::string name)
{
	Zombie* newZomb = new Zombie(name);
	return newZomb;
}
