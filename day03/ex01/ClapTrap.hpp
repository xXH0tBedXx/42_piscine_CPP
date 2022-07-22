#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

	public:
		void				attack(std::string const & target);
		void				take_damage(unsigned int amount);
		void				be_repaired(unsigned int amount);
		void				spend_some_energy(void);
		const std::string	&get_name(void) const;
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &src);
		~ClapTrap();
		ClapTrap			&operator=(int n);
		ClapTrap			&operator=(const ClapTrap &so);
	protected:
		const	std::string	name;
		int					hit_points;
		int					basic_hit_points;
		int					energy_points;
		int					attack_damage;
};

std::ostream	&operator<<(std::ostream &ostream, const ClapTrap &myClass);

#endif