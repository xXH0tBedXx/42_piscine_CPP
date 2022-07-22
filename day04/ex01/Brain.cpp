#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < Count_ideas; i++)
	{
		this->ideas[i] = insight();
	}
}

Brain::Brain(const Brain &other_brain)
{
	*this = other_brain;
}

Brain::~Brain()
{
	std::cout << "The fish rots from the head..." << std::endl;
}

std::string* Brain::get_ideas(void)
{
	return (this->ideas);
}

std::string	Brain::insight()
{
	return (first_part[std::rand() % 5] + " " + second_part[std::rand() % 5] + " " + third_part[std::rand() % 5]);
}

Brain& Brain::operator=(const Brain &obj)
{
	for (int i = 0; i < Count_ideas; i++)
	{
		this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}

std::string Brain::first_part[5] = {"Maybe", "Definitely", "friendly", "liberal", "memetic"};
std::string Brain::second_part[5] = {"i'm", "i'm not", "you are", "Baby is", "ninety nine percent of humanity is"};
std::string Brain::third_part[5] = {"cringe", "happy", "human", "dolor ipsum lorem sit amet", "just a programm"};