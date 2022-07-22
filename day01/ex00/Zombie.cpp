#include "Zombie.hpp"

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