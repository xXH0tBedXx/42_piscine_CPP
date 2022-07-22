#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <stdexcept>
# define SIZE	25
# define NORMAL	"\033[0m"
# define GREEN	"\033[32m"
# define ORANGE	"\033[31m"

class NoFoundException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return "Cannot find goal!";
	}
};

template<typename T>
void	displayIter(T it, T end)
{
	if (it != end)
		std::cout << GREEN << "Iterator found 42!!!" << NORMAL << std::endl;
	else
	{
		std::cout << ORANGE << "Iterator reach end." << NORMAL << std::endl;
		throw NoFoundException();
	}
}

template<typename T>
typename T::iterator	easyfind(T& container, int goal)
{
	typename T::iterator	res;
	
	res = find(container.begin(), container.end(), goal);

	displayIter(res, container.end());
	return res;
}

#endif