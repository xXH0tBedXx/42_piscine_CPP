#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main(void)
{

	srand(time(0));
	std::cout << ORANGE << "**********VECTOR**********" << NORMAL << std::endl;
	{
		std::vector<int>			v;
		std::vector<int>::iterator	iter;
		for (unsigned int i = 0; i < SIZE; i++)
		{
			v.push_back(rand() % 100);
			if (v.at(i) == 42)
				std::cout << GREEN;
			std::cout << "vector." << i << " = " << v.at(i) << std::endl;
			std::cout << NORMAL;
		}
		try
		{
			easyfind(v, 42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << ORANGE << "***********LIST***********" << NORMAL << std::endl;
	{
		std::list<int>				v;
		std::list<int>::iterator	iter;
		for (unsigned int i = 0; i < SIZE; i++)
		{
			v.push_back(rand() % 100);
			if (v.back() == 42)
				std::cout << GREEN;
			std::cout << "list." << i << " = " << v.back() << std::endl;
			std::cout << NORMAL;
		}
		try
		{
			easyfind(v, 42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}