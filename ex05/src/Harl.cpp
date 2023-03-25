#include "Harl.hpp"
#include <iostream>

#define CALL_MEMBER_FN(object,ptrToMember)  ((object)->*(ptrToMember))
const std::string Harl::levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"} ;
const HarlMemFn Harl::funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error} ;

void Harl::complain( std::string level )
{
	for ( int i = 0; i < 4; i++ ) {
		if ( level == levels[i] ) {
			CALL_MEMBER_FN(this, funcs[i]) () ;
		}
	} 
}

void Harl::debug( void )
{
	std::cout
		<< "[ DEBUG ]\n"
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl ;
}

void Harl::info( void )
{
	std::cout
		<< "[ INFO ]\n"
		<< "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl ;
}

void Harl::warning( void )
{
	std::cout
		<< "[ WARNING ]\n"
		<< "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl ;
}

void Harl::error( void )
{
	std::cout
		<< "[ ERROR ]\n"
		<< "This is unacceptable! I want to speak to the manager now." << std::endl ;
}
