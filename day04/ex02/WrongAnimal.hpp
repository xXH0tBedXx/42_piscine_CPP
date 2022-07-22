#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

	public:
		void make_sound(void) const; //THERE IS ONLY DIFFERENCE WITH NORMAL DOG!!!! (BARK)
		const std::string &get_type(void) const;
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		~WrongAnimal();
		WrongAnimal	&operator=(const WrongAnimal &other);
	protected:
		std::string type;
};

std::ostream	&operator<<(std::ostream &ostream, const WrongAnimal &instance);

#endif