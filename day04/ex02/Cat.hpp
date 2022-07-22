#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		void		show_idea(void) const;
		virtual void	make_sound(void) const;
		Cat();
		Cat(const Cat &src);
		~Cat();
	private:
		Brain *brain;
};

#endif