#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap ls("john");
	ClapTrap sl = ClapTrap("James");
	ls.attack("james");
	ls.take_damage(9);
	ls.be_repaired(8);
	sl.be_repaired(3);
	sl.take_damage(11);
}
