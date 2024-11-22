/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:54:30 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/21 21:27:52 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "defaultZombie";
	std::cout << "Beware... " << name << " is awaken\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie " << name << " is born\n";
}

//print a message with the name of the zombie for debugging purposes
Zombie::~Zombie(void)
{
	std::cout << "Zombie \"" << name << "\" has been destroyed\n";
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string newName)
{
	this->name = newName;
}