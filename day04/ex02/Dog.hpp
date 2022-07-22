#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		void		show_idea(void) const;
		virtual void	make_sound(void) const;
		const std::string	&get_type(void) const;
		Dog();
		Dog(const Dog &src);
		~Dog();
	private:
		Brain *brain;
};

#endif