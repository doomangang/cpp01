/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:48:14 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/21 21:58:54 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
* allocate N Zombie objects in a single allocation. 
* Then, it has to initialize the zombies, giving each one of them the name passed as parameter. 
* The function returns a pointer to the first zombie.
*/

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie* ZombHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
		ZombHorde[i].setName(name);

	return (ZombHorde);
}