#include <iostream>
#include <string>
#include <ctime>
#include "Beureucrat.hpp"

int	main()
{
	std::cout << "<_- TRYING TO CREATE BEUREUCRAT WITH TOO LOW QUALIFICATION -_>" << std::endl;
	try
	{
		Beureucrat	*x = new Beureucrat("VALERA", 1337);
		std::cout << *x << std::endl;
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl << "<_- TRYING TO CREATE BEUREUCRAT WITH TOO MUCH POWER -_>" << std::endl;
	try
	{
		Beureucrat	*x = new Beureucrat("ANTON", -1007);
		std::cout << *x << std::endl;
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	Beureucrat	*x = new Beureucrat("EUGENIY", 1);	// FINALLY, A NORMAL BEUREUCRAT!
	std::cout << std::endl << "<_- TRYING TO INCREASE POWER OF TOO POWERFULL BEUREUCRAT -_>" << std::endl;
	try
	{
		x->increment();
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl << "<_- DECREASE POWER OF BEUREUCRAT -_>" << std::endl;
	try
	{
		x->decrement();
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "now we have beureucrat " << *x << std::endl;
	return (0);
}