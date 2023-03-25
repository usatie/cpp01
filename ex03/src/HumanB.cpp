#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name, Weapon * weapon ): name(name), weapon(weapon)
{}

HumanB::HumanB( std::string name ): name(name), weapon(NULL)
{}

void	HumanB::attack(void)
{
	if ( weapon ) {
		std::cout << name << " attacks with their " << weapon->getType() << std::endl ; 
	}
}

void	HumanB::setWeapon( Weapon &weapon )
{
	// TODO: Check if delete this->weapon is necessary.
	this->weapon = &weapon ;
}
