#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("NoName"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "what was I made for? I AM CLAPTRAP" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "i'm just a copyof another ClapTrap..." << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(const std::string name): name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	this->basic_hit_points = this->hit_points;
	std::cout << "i am born... but born isn't my name. Cause my name is " << this->get_name() << "and I AM A CLAPTRAP" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "i'm dying in unreal torment. I AM CLAPTRAP" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &so)
{
	// std::cout << "you shouldn't have seen it when you called the program, but this operator assign hit_points by " + this->hit_points << std::endl;
	new (this) ClapTrap(so.get_name());
	return *this;
}

ClapTrap &ClapTrap::operator=(int hit_points)
{
	// std::cout << "you shouldn't have seen it when you called the program, but this operator assign hit_points by " + this->hit_points << std::endl;
	this->hit_points = hit_points;
	return *this;
}

const std::string	&ClapTrap::get_name(void) const
{
	return this->name;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->get_name() << " attack " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
}

void		ClapTrap::take_damage(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points <= 0)
		std::cout << "ClapTrap " << this->get_name() << " took " << amount << " damage and died in unreal torment" << std::endl;
	else
		std::cout << "ClapTrap " << this->get_name() << " took " << amount << " damage" << std::endl;
}

void		ClapTrap::be_repaired(unsigned int amount)
{
	this->hit_points += amount;
	if (this->hit_points == this->basic_hit_points && amount != 0)
		std::cout << "You can't heal more than maximum hit points!" << std::endl;
	else if (this->hit_points > this->basic_hit_points)
		this->hit_points = this->basic_hit_points;
	else
		std::cout << "ClapTrap " << this->get_name() << " ressurect " << amount << " hit points" << std::endl;
}

void	ClapTrap::spend_some_energy(void)
{
	this->energy_points -= 1;
	if (this->energy_points <= 0)
		std::cout << "you can't!" << std::endl;
}