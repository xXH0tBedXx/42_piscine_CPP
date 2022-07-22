#include "Animal.hpp"

Animal::Animal(): type("NonBinary")
{
	std::cout << "Default constructor for Animal is complete" << std::endl;
	return;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy constructor for Animal is complete" << std::endl;
	*this = src;
	return;
}

Animal::~Animal()
{
	std::cout << this->get_type() << " Animal died" << std::endl;
	return;
}

Animal &	Animal::operator=(Animal const &so)
{
	this->type = so.get_type();
	// std::cout << "Assignement operator for Animal is complete" << std::endl << "..." << std::endl << "..." << std::endl << "..." << std::endl;
	return *this;
}

void	Animal::make_sound(void) const
{
	std::cout << "<muttering>" << std::endl;
}

const std::string	&Animal::get_type(void) const
{
	// std::cout << "This Messege has locked LOL (method get_type iscomplete)" << std::endl << "..." << std::endl << "..." << std::endl << "..." << std::endl;
	return (this->type);
}

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance )
{
	ostream << instance.get_type();
	return ostream;
}