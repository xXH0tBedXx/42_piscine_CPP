#include <iostream>
#include <string>

int		main( void )
{
	std::string	original = "HI THIS IS BRAIN";
	std::string *stringPTR = &original;
	std::string	&stringREF = original;

	std::cout << "<_-ORIGINAL-_>" << std::endl;
	std::cout << "string: " << original << std::endl;
	std::cout << "address: " << &original << std::endl;
	std::cout << std::endl;
	std::cout << "<_-stringPTR-_>" << std::endl;
	std::cout << "string: " << *stringPTR << std::endl;
	std::cout << "adress: " << stringPTR << std::endl;
	std::cout << std::endl;
	std::cout << "<_-stringRef-_>" << std::endl;
	std::cout << "string: " << stringREF << std::endl;
	std::cout << "adress: " << &stringREF << std::endl;
}