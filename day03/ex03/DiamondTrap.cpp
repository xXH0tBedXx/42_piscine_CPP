#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->guard_gate_mode = false;
	this->name = std::string("Mr. Jonah");

	std::cout << "Who am I? I AM DIAMOND TRAP" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;

	std::cout << "what was I made for?" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "i'm just a copy..." << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
		std::cout << "i'm dying in unreal torment. I AM DIAMONDTRAP" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &so)
{
	new (this) DiamondTrap(so.get_name());
	return *this;
}

DiamondTrap &DiamondTrap::operator=(int hit_points)
{
	// std::cout << "you shouldn't have seen it when you called the program, but this operator assign hit_points by " + this->hit_points << std::endl;
	this->hit_points = hit_points;
	return *this;
}

const std::string	&DiamondTrap::get_name(void) const
{
	return this->name;
}

void	DiamondTrap::attack(std::string const &target)
{
	std::cout << "DiamondTrap " << this->get_name() << " attack " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	DiamondTrap::take_damage(int amount)
{
	this->hit_points -= amount;
	if (this->hit_points <= 0)
		std::cout << "DiamondTrap " << this->get_name() << " took " << amount << " damage and died in unreal torment" << std::endl;
	else
		std::cout << "DiamondTrap " << this->get_name() << " took " << amount << " damage" << std::endl;
}

void		DiamondTrap::be_repaired(int amount)
{
	this->hit_points += amount;
	if (this->hit_points == this->basic_hit_points && amount != 0)
		std::cout << "You can't heal more than maximum hit points!" << std::endl;
	else if (this->hit_points > this->basic_hit_points)
		this->hit_points = this->basic_hit_points;
	else
		std::cout << "DiamondTrap " << this->get_name() << " ressurect " << amount << " hit points" << std::endl;
}

void	DiamondTrap::high_fives_guys(void)
{
	std::cout << this->get_name() << " says: i'm a bear (and also DIAMONDTRAP)" << std::endl;
}

void	DiamondTrap::guard_gate(void)
{
	if (this->guard_gate_mode)
		std::cout << "I got shot in the knee" << std::endl;
	else
		std::cout << "The road of adventure leads me" << std::endl;
}

void	DiamondTrap::who_am_i(void)
{
	std::cout << "I am " << this->get_name() << std::endl;
	std::cout << "But like ClapTrap i am " << ClapTrap::get_name()<< std::endl;
}