#include "Array.hpp"
#include "Array.tpp"
#define NORMAL  "\033[0m"
#define YELLOW "\033[33m"

int	main()
{
	{
		std::cout << YELLOW << "creating STRING array" << NORMAL << std::endl;
		Array<std::string>	strArray(5);
		strArray[0] = "Hello!";
		strArray[1] = "I'm";
		strArray[2] = "CRINGE";
		strArray[3] = "just";
		strArray[4] = "an Array";
		std::cout << "Array size is " << strArray.size() << std::endl;
		std::cout << "Array is: ";
		for (size_t i = 0; i < strArray.size(); i++)
		{
			std::cout << "[" << strArray[i] << "]";
		}
		std::cout << std::endl << "-----------------------------------------" << std::endl;
		std::cout << "NOW TRYING TO CHANGE ONE STRING!" << std::endl;
		std::cout << strArray[1] << " " << strArray[2] << std::endl;
		strArray[1] = "I'm NOT";
		std::cout << "->" << std::endl;
		strArray[2] = "lorem ipsum dolor sit amet";
		std::cout << strArray[1] << " " << strArray[2] << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
	}
	{
		std::cout << YELLOW << "creating INT array with constructor copy" << NORMAL << std::endl;
		Array<int> intArray(5);
		std::cout << "intArray:         ";
		for (size_t i = 0; i < intArray.size(); i++)
		{
			std::cout << "[" << intArray[i] << "]";
		}
		std::cout << " = " << intArray.size() << std::endl;
		Array<int> copyIntArray(intArray);
		std::cout << "copy of intArray: ";
		for (size_t i = 0; i < copyIntArray.size(); i++)
		{
			std::cout << "[" << copyIntArray[i] << "]";
		}
		std::cout << " = " << copyIntArray.size() << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
		try
		{
			std::cout << "TRYING TO OUT OF INDEX (69)!!!!!!" << std::endl;
			std::cout << copyIntArray[69] << std::endl;
			std::cout << "IF YOU'RE READING THIS... THIS IS BAD.." << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << YELLOW << "WARNING! " << NORMAL << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			std::cout << "TRYING TO OUT OF INDEX (-7)!!!!!!" << std::endl;
			std::cout << copyIntArray[-7] << std::endl;
			std::cout << "IF YOU'RE READING THIS... THIS IS BAD.." << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << YELLOW << "WARNING! " << NORMAL << e.what() << std::endl;
		}
	}
	return (0);
}