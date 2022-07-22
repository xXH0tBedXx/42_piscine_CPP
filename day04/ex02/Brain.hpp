#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <random>

#define Count_ideas 100

class Brain
{
	public:
		std::string*	get_ideas(void);
		Brain();
		Brain(const Brain&);
		~Brain();
		Brain& operator=(const Brain&);
	private:
		std::string	ideas[Count_ideas];
		std::string	insight(void);
		static std::string first_part[5];
		static std::string	second_part[5];
		static std::string	third_part[5];
};

#endif