#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(): name("[Default Name]") {
	std::cout << "Zombie default constructor is called: " << name << std::endl ;
}

Zombie::Zombie(std::string name): name(name) {
	std::cout << "Zombie constructor is called: " << name << std::endl ;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destructor is called: " << name << std::endl ;
}

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}
