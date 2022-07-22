#include "Zombie.hpp"

int main()
{
	std::cout << "NIGHTIME HAS COME..." << std::endl;
	Zombie *ZOMBIES = zombieHorde(countZ, HORDEname);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "A living man came into view of the horde " << HORDEname << std::endl;
	for (int i = 0; i < countZ; i++)
	{
		ZOMBIES[i].anounce();
	}

	std::cout << std::endl << std::endl << std::endl;
	std::cout << "DAWN HAS COME..." << std::endl;
	delete [] ZOMBIES;
	return(0);
}