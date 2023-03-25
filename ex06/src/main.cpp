#include "Harl.hpp"
#include <iostream>

#define PROGNAME_DFL "harlFilter"

int	main( int argc, char *argv[] )
{
	std::string progname = PROGNAME_DFL ;
	if ( argv[0] )
		progname = argv[0] ;
	if ( argc != 2 ) {
		std::cerr << "Usage: " << progname << " level" << std::endl ;
		return EXIT_FAILURE ;
	}
	Harl h ;
	h.filter(argv[1]) ;
}
