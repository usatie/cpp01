#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl ;
typedef void (Harl::*HarlMemFn)(void) ;

class Harl {
public:
	void complain( std::string level );
	void filter( std::string level );
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	static const std::string levels[4];
	static const HarlMemFn funcs[4];
};

#endif
