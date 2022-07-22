#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	smith("Mr. Smith");
	ClapTrap	neo("Tomas Anderson");

	smith.attack("Tomas Anderson");
	neo.take_damage(3);
	neo.attack("Mr. Smith");
	smith.take_damage(3);
	neo.attack("Mr. Smith");
	smith.take_damage(4);

	ScavTrap	trinity("Trinity");

	trinity.attack("Mr. Smith");
	smith.take_damage(0);
	neo.attack("Trinity");
	trinity.take_damage(100);

	return (0);
}