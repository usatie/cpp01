#include <iostream>
#include <string>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN" ;
	std::string	*stringPTR = &string ;
	std::string &stringREF = string ;

	std::cout << "The memory address of the string variable: " << (void *)&string << std::endl ;
	std::cout << "The memory address held by stringPTR: " << (void *)stringPTR << std::endl ;
	std::cout << "The memory address held by stringREF: " << (void *)&stringREF << std::endl ;

	std::cout << "The value of the string variable: " << string << std::endl ;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl ;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl ;
}
