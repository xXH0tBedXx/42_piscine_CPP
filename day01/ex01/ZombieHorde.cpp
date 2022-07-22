#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	if (N > 0)
	{
		Zombie *HORDE = new Zombie[N];
		
		for (int i = 0; i < N; i++)
			HORDE[i].set_name("Zombie number " + std::to_string(i + 1) + " in HORDE " + name);

		return(HORDE);
	}
	std::cout << "What is dead cannot be negative" << std::endl;
	return (NULL);
}