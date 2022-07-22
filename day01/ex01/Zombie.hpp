#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define countZ 7
# define  HORDEname "leviathan"

# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void	anounce(void) const;
	void	set_name(std::string);
	std::string get_name(void) const;
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif