/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:21:05 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/21 21:38:54 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void	leakc(void){
// 	system("leaks zombie");
// }

int	main(void)
{
	Zombie *new_zombie;
	new_zombie = newZombie("heap");
	new_zombie->announce();
	randomChump("randomChump");
	delete new_zombie;
	return (0);
}