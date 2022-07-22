#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		virtual void	make_sound(void) const;
		Cat();
		Cat(const Cat &src);
		~Cat();
};

#endif