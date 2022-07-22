#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
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
	delete this->brain;
	std::cout<< this->get_type() << " died..." << std::endl;
	return;
}

void	Dog::make_sound(void) const
{
	std::cout << "BARK" << std::endl;
}

void	Dog::show_idea(void) const
{
	srand(time(nullptr));
	std::string	*ideas = this->brain->get_ideas();
	std::cout << '[' << this->type << "]: " << ideas[rand() % 5] << std::endl;
}

Dog &Dog::operator=(Dog const &so)
{
	this->type = so.get_type();
	this->brain = new Brain(*so.brain);
	return *this;
}