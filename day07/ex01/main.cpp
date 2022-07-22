#include <iostream>
#include <string>
#include "iter.hpp"

#include <vector>

template<typename T>
void	display(const T& item)
{
	std::cout << "Value:" << item << std::endl;
}

int	main(void)
{
	std::string	strArray[5];
	int			intArray[5];

	strArray[0] = "Hello";
	strArray[1] = ",";
	strArray[2] = "world";
	strArray[3] = "!";
	strArray[4] = "Go on!";
	::iter(strArray, 5, &display);

	std::cout << std::endl;

	intArray[0] = 1;
	intArray[1] = 2;
	intArray[2] = 3;
	intArray[3] = 4;
	intArray[4] = 5;
	::iter(intArray, 5, &display);
}