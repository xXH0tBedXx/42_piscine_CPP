#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		void	attack(std::string const &);
		void	take_damage(int);
		void	be_repaired(int);
		void	high_fives_guys(void);
		void	guard_gate(void);
		void	who_am_i(void);
		const std::string	&get_name(void) const;
		DiamondTrap();
		DiamondTrap(const DiamondTrap&);
		DiamondTrap(std::string);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &DiamondTrap);
		DiamondTrap &operator=(int hit_points);
	private:
		std::string	name;
};
#endif