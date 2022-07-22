#include "FragTrap.hpp"

int	main()
{
	ClapTrap	smith("Mr. Smith");
	ClapTrap	neo("Tomas Anderson");

	smith.attack("Tomas Anderson");
	neo.take_damage(0);
	neo.attack("Mr. Smith");
	smith.take_damage(0);
	neo.attack("Mr. Smith");
	smith.take_damage(0);

	ScavTrap	trinity("Trinity");

	trinity.attack("Mr. Smith");
	smith.take_damage(0);
	neo.attack("Trinity");
	trinity.take_damage(100);

	FragTrap	cypher("Cypher");

	cypher.attack("Trinity");
	trinity.take_damage(01);
	cypher.high_fives_guys();

	return (0);
}