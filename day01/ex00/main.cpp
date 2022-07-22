
#include "Zombie.hpp"

int main()
{
	std::cout << "old wizzard: what have i done..." << std::endl << std::endl << std::endl;

	Zombie Zombie1(name1);
	Zombie *Zombie2 = newZombie(name2);	
	std::cout << std::endl << std::endl << std::endl;

	Zombie1.anounce();
	Zombie2->anounce();
	std::cout << std::endl << std::endl << std::endl;

	delete Zombie2;
	std::cout << std::endl << std::endl << std::endl;
	
	randomChump(punk);
	return (0);
}