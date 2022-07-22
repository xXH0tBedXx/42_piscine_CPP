#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;

	public:
		void	attack(void) const;
		Weapon&	get_weapon(void) const;
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};
#endif