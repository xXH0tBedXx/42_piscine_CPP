#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default constructor for Dog is complete" << std::endl;
	return;
}

Dog::Dog(Dog const &src)
{
	*this = src;
	std::cout << "Copy constructor for Dog is complete" << std::endl;
	return;
}

Dog::~Dog()
{
	std::cout<< this->get_type() << " died..." << std::endl;
	return;
}

void	Dog::make_sound(void) const
{
	std::cout << "BARK" << std::endl;
}