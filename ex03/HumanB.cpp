#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weapon = nullptr;
}

HumanB::~HumanB() {}

void    HumanB::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}