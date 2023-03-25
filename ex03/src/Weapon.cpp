#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(): type("[Default Weapon]") {
	std::cout << "Weapon default constructor is called: " << type << std::endl ;
}

Weapon::Weapon( std::string type ): type(type) {
	std::cout << "Weapon constructor is called: " << type << std::endl ;
}


const std::string & Weapon::getType(void)
{
	return type ;
}

void	Weapon::setType( std::string type )
{
	this->type = type ;
}
