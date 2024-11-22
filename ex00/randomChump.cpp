/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:54:17 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/21 21:26:58 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//creates a zombie, name it, and the zombie announces itself.
void	randomChump(std::string name)
{
	Zombie newZomb = Zombie(name);
	newZomb.announce();
}
