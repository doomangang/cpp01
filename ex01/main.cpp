/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:46:58 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/22 19:40:51 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//void    leakc(void){
//	system("leaks zombieHorde");
//}

int main(void)
{
	int n = 5;
	Zombie *Z = zombieHorde(n, "zombie");
	for (int i = 0; i < n; i++)
		Z[i].announce();
	delete[] Z;
}