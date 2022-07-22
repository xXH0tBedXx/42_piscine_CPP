#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		virtual void	make_sound(void) const;
		Dog();
		Dog(const Dog &src);
		~Dog();
};

#endif