#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{

	public:
		virtual void		make_sound(void) const = 0;
		virtual const std::string	&get_type(void) const;
		Animal();
		Animal(const Animal &src);
		virtual ~Animal();
		Animal	&operator=(const Animal &other);
	protected:
		std::string type;
};

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance);

#endif