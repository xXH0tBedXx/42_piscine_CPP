#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{}

Weapon::~Weapon(void)
{}

const std::string&	Weapon::get_type(void) const
{
	return (this->type);
}

void		Weapon::set_type(const std::string& type)
{
	if (type == "")
		this->type = "unexpected weapon";
	this->type = type;
}