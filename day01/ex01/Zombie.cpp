#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "ANOTHER ZOMBIE LEFT HIS GRAVE" << std::endl;
}

Zombie::Zombie(std::string name): name(name)
{
	std::cout << this->name << ": Aliiiive..... Agaaaaaaiiiinnn....." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": My time has come..."  << std::endl;
}

void Zombie::anounce(void) const
{
	std::cout << this->name << ": Braaaaaiiiiiiinnnnssss......."  << std::endl;
}

std::string	Zombie::get_name( void ) const
{
	return (this->name);
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}