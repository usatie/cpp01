#include "Zombie.hpp"

int	main(void)
{
	{
		Zombie z;

		z.announce() ;
	}
	{
		Zombie *z;

		randomChump("Franken") ;
		z = newZombie("Stein") ;
		z->announce() ;
		delete z ;
	}
}
