/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:21:05 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/22 21:22:26 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void	leakc(void){
// 	system("leaks zombie");
// }

int	main(void)
{
	Zombie *new_zombie;
	Zombie stack("stack");
	new_zombie = newZombie("heap");
	new_zombie->announce();
	stack.announce();
	randomChump("randomChump");
	delete new_zombie;
	return (0);
}