#include "Zombie.hpp"

int	main(void)
{
	// Normal Case
	{
		int N = 5 ;
		Zombie *zombies;

		zombies = zombieHorde(N, "Michale") ;
		for ( int i = 0; i < N; i++ )
		{
			zombies[i].announce() ;
		}
		delete[] zombies ;
	}
	// N is zero
	{
		int N = 0 ;
		Zombie *zombies;

		zombies = zombieHorde(N, "Michale") ;
		for ( int i = 0; i < N; i++ )
		{
			zombies[i].announce() ;
		}
		delete[] zombies ;
	}
	// N is negative
	{
		int N = -1 ;
		Zombie *zombies;

		zombies = zombieHorde(N, "Michale") ;
		for ( int i = 0; i < N; i++ )
		{
			zombies[i].announce() ;
		}
		delete[] zombies ;
	}
}
