#include "replace.hpp"

replace::replace()
{}

replace::replace(std::string file, std::string s1, std::string s2): file(file), s1(s1), s2(s2)
{}

replace::~replace()
{}

void	replace::error(int N)
{
	if (N == empty_file_path)
		std::cout << "the path to the file can't be empty" << std::endl;
	else if (N == empty_strings)
		std::cout << "strings can't be empty, are you crazy?!" << std::endl;
	else
		std::cout << "something went wrong!" << std::endl;
	exit(0);
}