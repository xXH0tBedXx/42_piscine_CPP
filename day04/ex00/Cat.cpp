#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default constructor for Cat is complete" << std::endl;
	return;
}

Cat::Cat(Cat const &src)
{
	*this = src;
	std::cout << "Copy constructor for Cat is complete" << std::endl;
	return;
}

Cat::~Cat()
{
	std::cout<< this->get_type() << " died" << std::endl;
	return;
}

void	Cat::make_sound(void) const
{
	std::cout << "NYAAA" << std::endl;
}