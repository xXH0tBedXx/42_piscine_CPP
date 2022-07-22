#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hit_points = 100;
	this->basic_hit_points = this->hit_points;
	this->energy_points = 100;
	this->attack_damage = 30;

	std::cout << "Who am I? I AM A FRAGTRAP" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;

	std::cout << "what was I made for? I AM A FRAGTRAP" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "i'm just a copy of another FragTrap..." << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
		std::cout << "i'm dying in unreal torment. I AM FRAGTRAP" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &so)
{
	new (this) FragTrap(so.get_name());
	return *this;
}

FragTrap &FragTrap::operator=(int hit_points)
{
	// std::cout << "you shouldn't have seen it when you called the program, but this operator assign hit_points by " + this->hit_points << std::endl;
	this->hit_points = hit_points;
	return *this;
}

const std::string	&FragTrap::get_name(void) const
{
	return this->name;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->get_name() << " attack " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::take_damage(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points <= 0)
		std::cout << "FragTrap " << this->get_name() << " took " << amount << " damage and died in unreal torment" << std::endl;
	else
		std::cout << "FragTrap " << this->get_name() << " took " << amount << " damage" << std::endl;
}

void		FragTrap::be_repaired(unsigned int amount)
{
	this->hit_points += amount;
	if (this->hit_points == this->basic_hit_points && amount != 0)
		std::cout << "You can't heal more than maximum hit points!" << std::endl;
	else if (this->hit_points > this->basic_hit_points)
		this->hit_points = this->basic_hit_points;
	else
		std::cout << "FragTrap " << this->get_name() << " ressurect " << amount << " hit points" << std::endl;
}

void	FragTrap::high_fives_guys(void)
{
	std::cout << this->get_name() << " says: i'm a bear (and also FRAGTRAP)" << std::endl;
}
