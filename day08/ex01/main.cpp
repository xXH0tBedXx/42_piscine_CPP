#include "Span.hpp"
#include <ctime>
#include <limits>

#define MULTIPLIER1 420
#define MULTIPLIER2 5000
#define MULTIPLIER3 100000
#define SIZE	5
#define NORMAL	"\033[0m"
#define GREEN	"\033[32m"
#define ORANGE	"\033[31m"

void			randomFill(Span& toFill, int mult)
{
	size_t	numbersToFill = toFill.getSpaceLeft();
	int		num;
	std::cout << GREEN << "FILLING " << numbersToFill << " elements random numbers" << NORMAL << std::endl; 
	for (size_t i = 0; i < numbersToFill; i++)
	{
		num = rand() % mult;
		// std::cout << GREEN << "ADD number " << num << NORMAL << std::endl;
		toFill.addNumber(num);
	}
}

int	main(void)
{
	srand(time(0));
	int num;
	std::cout << ORANGE << "**********LITTLE_TEST**********" << NORMAL << std::endl;
	{
		std::cout << "|CREATE SPAN WITH MAX SIZE = " << SIZE << "|" << std::endl;
		Span	span1(SIZE);
		std::cout << GREEN << "Current elements = " << span1.getCurrentSize() << std::endl;
		std::cout << "Maximum count of elements = " <<span1.getMaxSize() << NORMAL << std::endl;
		try
		{
			std::cout << "|TRYING TO FIND LONGEST SPAN: ";
			std::cout << GREEN << span1.longestSpan() << NORMAL << "|" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << ORANGE << e.what() << NORMAL << "|" << std::endl;
		}

		try
		{
			std::cout << "|TRYING TO FIND SHORTEST SPAN: ";
			std::cout << GREEN << span1.shortestSpan() << NORMAL << "|" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << ORANGE << e.what() << NORMAL << "|" << std::endl;
		}

		for (int i = 0; i < SIZE + 1; i++)
		{
			num = rand() % 100;
			try
			{
				std::cout << GREEN << "ADD number " << num << NORMAL << std::endl;
				std::cout << "|";
				span1.addNumber(num);
				std::cout << "TRYING TO OUTPUT SPAN: ";
				std::cout << span1 << NORMAL << "|" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << ORANGE << e.what() << NORMAL << "|"<< std::endl;
			}
		}
		std::cout << std::endl << ORANGE << "**********42_TESTS**********" << NORMAL << std::endl;
		{
			std::cout << "|CREATE SPAN WITH MAX SIZE = 42|" << std::endl;
			Span	span2(42);
			std::cout << GREEN << "Current elements = " << span2.getCurrentSize() << std::endl;
			std::cout << "Maximum count of elements = " <<span2.getMaxSize() << NORMAL << std::endl;
			std::cout << GREEN << "ADD number 21 AND 42" << NORMAL << std::endl;
			span2.addNumber(21);
			span2.addNumber(42);
			std::cout << span2 << std::endl;
			::randomFill(span2, MULTIPLIER1);
			std::cout << span2 << std::endl;
		}
		std::cout << std::endl << ORANGE << "**********500_TESTS**********" << NORMAL << std::endl;
		{
			std::cout << "|CREATE SPAN WITH MAX SIZE = 500|" << std::endl;
			Span	span2(500);
			std::cout << GREEN << "Current elements = " << span2.getCurrentSize() << std::endl;
			std::cout << "Maximum count of elements = " <<span2.getMaxSize() << NORMAL << std::endl;
			::randomFill(span2, MULTIPLIER2);
			std::cout << span2 << std::endl;
		}
		std::cout << std::endl << ORANGE << "**********10000_TESTS**********" << NORMAL << std::endl;
		{
			std::cout << "|CREATE SPAN WITH MAX SIZE = 10000|" << std::endl;
			Span	span2(10000);
			std::cout << GREEN << "Current elements = " << span2.getCurrentSize() << std::endl;
			std::cout << "Maximum count of elements = " <<span2.getMaxSize() << NORMAL << std::endl;
			::randomFill(span2, MULTIPLIER3);
			std::cout << span2 << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << ORANGE << "**********SUBJECT_TEST**********" << NORMAL << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;		
	}
	return 0;
}