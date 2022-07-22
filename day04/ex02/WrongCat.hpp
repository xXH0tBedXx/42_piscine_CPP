#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		void	make_sound(void) const; //THERE IS ONLY DIFFERENCE WITH NORMAL DOG!!!! (BARK)
		WrongCat();
		WrongCat(const WrongCat &src);
		~WrongCat();
};

#endif