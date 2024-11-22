/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:54:53 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/22 18:26:05 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
					Zombie(std::string name);
					~Zombie();
		void		announce(void);
};

	Zombie* 		newZombie(std::string name);
	void			randomChump(std::string name);

#endif