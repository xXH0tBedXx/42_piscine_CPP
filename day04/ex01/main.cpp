#include "Dog.hpp"
#include "Cat.hpp"

#define Count_animals 10
int main()
{
	Animal		*swarm[Count_animals];

	std::cout << "*************** CREATING SWARM ***************" << std::endl;
	for (int i = 0; i < Count_animals; i++)
	{
		if (i % 2 == 0)
			swarm[i] = new Dog();
		else
			swarm[i] = new Cat();
		std::cout << swarm[i]->get_type() << " says: ";
		swarm[i]->make_sound();
		std::cout << std::endl;
	}


	std::cout << "*** TOTAL AMOUNT OF SUMMONED CREATURES = " << Count_animals << " ***" << std::endl << std::endl << std::endl;

	for (int i = 0; i < Count_animals; i++)
		delete swarm[i];
	std::cout << "*** CREATING ONE SMART AND CUTE DOGE ***" << std::endl;
	Dog	*smort_doge = new Dog();
	std::cout << "*** HEY DOGE! WHAT ARE YOU WANT TO SAY? ***" << std::endl;
	smort_doge->show_idea();
	std::cout << "*** d'oh... ***" << std::endl;
	delete smort_doge;
	return (0);
}