#include "replace.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	buffer;
		std::ofstream file_to_replace;
		replace prelace;
		std::ifstream cpyifs;
		cpyifs.open(argv[1]);
		file_to_replace.open(std::string(argv[1]) + std::string(".replace"));
		bool a = cpyifs.is_open();
		bool b = file_to_replace.is_open();
		if (a && b)
		{
			size_t acc;
			while (!cpyifs.eof())
			{
				std::getline(cpyifs, buffer);
				acc = buffer.find(argv[2]);
				if (acc != std::string::npos)
				{
					int tmp = 0;
					while (acc != std::string::npos)
					{
						file_to_replace << buffer.substr(tmp, acc - tmp);
						file_to_replace << std::string(argv[3]);
						tmp = acc + std::string(argv[2]).length();
						acc = buffer.find(argv[2], tmp);
					}
					file_to_replace << buffer.substr(tmp, std::string::npos);
				}
				else
					file_to_replace << buffer;
				if (!cpyifs.eof())
					file_to_replace << std::endl;
			}
			cpyifs.close();
			file_to_replace.close();
		}
		else
			prelace.error(3);
	}
	else
		std::cout << "Error: wrong number of arguments" << std::endl << "to run the program correctly: "  << std::endl << "1st argument is a test file"  << std::endl <<  "2nd argument is a first string to replase"  << std::endl <<  "3rd argument is a second string to replace" << std::endl;
}