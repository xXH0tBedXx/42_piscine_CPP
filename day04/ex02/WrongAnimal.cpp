#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("NonBinary")
{
	std::cout << "Default constructor for WrongAnimal is complete" << std::endl << "..." << std::endl << "..." << std::endl << "..." << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Copy constructor for WrongAnimal is complete" << std::endl << "..." << std::endl << "..." << std::endl << "..." << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->get_type() << " WrongAnimal died" << std::endl << "..." << std::endl << "..." << std::endl << "..." << std::endl;
	return;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const &so)
{
	this->type = so.get_type();
	// std::cout << "Assignement operator for WrongAnimal is complete" << std::endl << "..." << std::endl << "..." << std::endl << "..." << std::endl;
	return *this;
}

void	WrongAnimal::make_sound(void) const
{
	std::cout << "All of my life is a mistake?" << std::endl << std::endl << std::endl;
}

const std::string	&WrongAnimal::get_type(void) const
{
	// std::cout << "This Messege has locked LOL (method get_type iscomplete)" << std::endl << "..." << std::endl << "..." << std::endl << "..." << std::endl;
	return (this->type);
}

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance )
{
	ostream << instance.get_type();
	return ostream;
}