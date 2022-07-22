#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	protected:
		bool					guard_gate_mode;

	public:
		void					attack(std::string const &);
		void					take_damage(unsigned int);
		void					be_repaired(unsigned int);
		const std::string		&get_name(void) const;
		void					guard_gate();
		ScavTrap();
		ScavTrap(const ScavTrap&);
		ScavTrap(std::string);
		~ScavTrap();
		ScavTrap 				&operator=(const ScavTrap &so);
		ScavTrap 				&operator=(int hit_points);
};

#endif