#include "Conversion.hpp"

#include <string>
#include <iostream>

int	main(int argc, char** argv)
{
	Converter Converter;

	try
	{
		if (argc == 1)
			throw (Converter::EmptyInput());
		for (int i = 1; i < argc; i++)
		{
			Converter.analyze_input(argv[i]);
			Converter.print_result();
			if (i + 1 < argc)
				std::cout << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		Converter.help();
	}
	return 0;
}