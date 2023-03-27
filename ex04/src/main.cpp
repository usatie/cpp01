#include <iostream>
#include <fstream>
#include <iostream>

#define PROGNAME_DFL "./ft_sed"
const std::string progname = "./ft_sed" ;
static std::string replace(
		const std::string & s,
		const std::string & pattern,
		const std::string & replacement ) ;

static int	replace_file(
		const std::string & filename,
		const std::string & s1,
		const std::string & s2 ) ;

int	main( int argc, char *argv[] )
{
	std::string progname = PROGNAME_DFL ;
	if ( argv[0] )
		progname = argv[0] ;
	if ( argc != 4 )
	{
		std::cerr << "Usage: " << progname << " <filename> s1 s2" << std::endl ;
		return EXIT_FAILURE ;
	}
	const std::string filename = argv[1], s1 = argv[2], s2 = argv[3] ;
	if ( s1.empty() )
	{
		std::cerr << "Usage: " << progname << " <filename> s1 s2" << std::endl ;
		std::cerr << "Error: s1 must be non empty string." << std::endl ;
		return EXIT_FAILURE ;
	}
	return replace_file( filename, s1, s2 ) ;
}

static std::string replace( const std::string & s, const std::string & pattern, const std::string & replacement )
{
	std::string result ;
	std::string::size_type	start = 0, found = s.find( pattern ) ;
	while ( found != std::string::npos ) {
		result += s.substr( start, found - start ) ;
		result += replacement ;
		start = found + pattern.length() ;
		found = s.find( pattern, start ) ;
	}
	result += s.substr( start ) ;
	return result ;
}

static int	replace_file( const std::string & filename, const std::string & s1, const std::string & s2 )
{
	// Open input file stream
	std::ifstream ifs(filename);
	if ( ifs.fail() )
	{
		std::cerr << "Error: Failed to open: " << filename << std::endl ;
		return EXIT_FAILURE ;
	}

	// Open output file stream
	std::ofstream ofs(filename + ".replace", std::ofstream::out | std::ofstream::trunc);
	if ( ofs.fail() )
	{
		std::cerr << "Error: Failed to open: " << filename + ".replace" << std::endl ;
		return EXIT_FAILURE ;
	}

	// line by line replace
	std::string line ;
	while ( ifs.good() ) {
		std::getline( ifs, line ) ;
		ofs << replace( line, s1, s2 ) ;
		if ( ifs.peek() != EOF )
			ofs << std::endl ;
		else
			ofs.flush() ;
		if ( ofs.fail() ) {
			std::cerr << "Error: Failed to write." << std::endl ;
			return EXIT_FAILURE ;
		}
	}
	if ( !ifs.eof() ) {
		std::cerr << "Error: Failed to getline." << std::endl ;
		return EXIT_FAILURE ;
	}
	return EXIT_SUCCESS ;
}
