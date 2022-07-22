#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
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
	delete this->brain;
	std::cout<< this->get_type() << " died" << std::endl;
	return;
}

void	Cat::make_sound(void) const
{
	std::cout << "NYAAA" << std::endl;
}

void	Cat::show_idea(void) const
{
	std::string	*ideas = this->brain->get_ideas();
	srand(time(nullptr));
	std::cout << '[' << this->type << "]: " << ideas[rand() % 5] << std::endl;
}

Cat &Cat::operator=(Cat const &so)
{
	this->type = so.get_type();
	this->brain = new Brain(*so.brain);
	return *this;
}