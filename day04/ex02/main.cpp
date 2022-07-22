#include "Dog.hpp"
#include "Cat.hpp"

#define Count_animals 10
int main()
{
	Animal		*swarm[Count_animals];
	// swarm[0] = new Animal();

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
	std::cout << "*** TOTAL AMOUNT OF SUMMONED CREATURES = " << Count_animals << " ***" << std::endl;

	for (int i = 0; i < Count_animals; i++)
		delete swarm[i];

	Dog	*smort_doge = new Dog();
	smort_doge->show_idea();
	delete smort_doge;
	return (0);
}