#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		void		show_idea(void) const;
		virtual void	make_sound(void) const;
		Dog();
		Dog(const Dog &src);
		~Dog();
		Dog	&operator=(const Dog &other);
	private:
		Brain *brain;
};

#endif