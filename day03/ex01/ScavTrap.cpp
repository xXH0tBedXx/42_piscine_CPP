#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;

	std::cout << "Who am I? I AM SCAVTRAP" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->basic_hit_points = this->hit_points;
	this->energy_points = 50;
	this->attack_damage = 20;

	std::cout << "what was I made for? I AM A SCAVTRAP" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "i'm just a copy of another ScavTrap..." << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "i'm dying in unreal torment. I AM SCAVTRAP" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &so)
{
	// std::cout << "you shouldn't have seen it when you called the program, but this operator assign hit_points by " + this->hit_points << std::endl;
	new (this) ScavTrap(so.get_name());
	return *this;
}

ScavTrap &ScavTrap::operator=(int hit_points)
{
	// std::cout << "you shouldn't have seen it when you called the program, but this operator assign hit_points by " + this->hit_points << std::endl;
	this->hit_points = hit_points;
	return *this;
}

const std::string	&ScavTrap::get_name(void) const
{
	return this->name;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->get_name() << " attack " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::take_damage(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points <= 0)
		std::cout << "ScavTrap " << this->get_name() << " took " << amount << " damage and died in unreal torment" << std::endl;
	else
		std::cout << "ScavTrap " << this->get_name() << " took " << amount << " damage" << std::endl;
}

void		ScavTrap::be_repaired(unsigned int amount)
{
	this->hit_points += amount;
	if (this->hit_points == this->basic_hit_points && amount != 0)
		std::cout << "You can't heal more than maximum hit points!" << std::endl;
	else if (this->hit_points > this->basic_hit_points)
		this->hit_points = this->basic_hit_points;
	else
		std::cout << "ScavTrap " << this->get_name() << " ressurect " << amount << " hit points" << std::endl;
}

void	ScavTrap::guard_gate(void)
{
	if (this->guard_gate_mode)
		std::cout << "I got shot in the knee and I AM A SCAVTRAP" << std::endl;
	else
		std::cout << "The road of adventure leads me and I AM A SCAVTRAP" << std::endl;
}