/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:51:41 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/22 17:51:42 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
public:
			Harl();
			~Harl();
	void	complain( std::string level );
};
#endif
