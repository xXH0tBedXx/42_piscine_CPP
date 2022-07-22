#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{}

HumanB::~HumanB(void)
{}

void	HumanB::attack(void) const
{
		std::cout << this->name << " attacks with " << this->weapon->get_type() << std::endl;
		return;
}

Weapon&	HumanB::get_weapon(void) const
{
	return (*(this->weapon));
}

void	HumanB::set_weapon(Weapon& weapon)
{
	this->weapon = &weapon;
}