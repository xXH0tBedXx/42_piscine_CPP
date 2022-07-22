#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define name1 "random zombie from the crowd"
# define name2 "third zombie on the right"
# define punk "dead anarchist"

# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void	anounce(void) const;
	Zombie(std::string name);
	~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif