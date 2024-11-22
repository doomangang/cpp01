/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:54:53 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/22 19:45:47 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

#include <iostream>
#include <sstream>

class Zombie
{
	private:
		std::string	name;
	public:
				Zombie();
				Zombie(std::string name);
				~Zombie();
		void	announce(void);
		void	setName(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif