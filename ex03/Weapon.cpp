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