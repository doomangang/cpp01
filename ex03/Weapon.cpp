/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:51:21 by jihyjeon          #+#    #+#             */
/*   Updated: 2024/11/22 17:51:22 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType() {
	const std::string &typeREF = type;
	return (typeREF);
}

void    Weapon::setType(std::string newType) {
	type = newType;
}