#ifndef FLAGTRAP_H
# define FLAGTRAP_H

# include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:
	FragTrap();
	FragTrap(const FragTrap&);
	FragTrap(std::string);
	~FragTrap();
	virtual const std::string	&get_name(void) const;
	void				attack(std::string const &);
	void				take_damage(unsigned int);
	void				be_repaired(unsigned int);
	void				high_fives_guys(void);

	FragTrap	&operator=(const FragTrap &FragTrap);
	FragTrap	&operator=(int hit_points);
};
#endif