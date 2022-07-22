#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "Wrong_animal";
	std::cout << "Default constructor for Wrong_animal is complete" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
	std::cout << "Copy constructor for Wrong_animal is complete" << std::endl;
	return;
}

WrongCat::~WrongCat()
{
	std::cout<< this->get_type() << "is still alive! Why?" << std::endl << std::endl << std::endl;
	return;
}

void	WrongCat::make_sound(void) const
{
	std::cout << "Ну гав или чего или мяу" << std::endl << std::endl << std::endl;
}