#include <iostream>
#include <string>
#include <ctime>
#include "Beureucrat.hpp"
#include "Form.hpp"

int	main()
{
	Beureucrat valera("Valeriy", 149);
	Beureucrat vasya("Vasiliy", 69);
	std::cout << std::endl << "<_- TRYING TO CREATE FORM -_>" << std::endl;
	try
	{
		Form paper("Independence Declaration", 700, 2);
		std::cout << paper << "creating complete" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl  << "<_- TRYING TO CREATE ANOTHER FORM -_>" << std::endl;
	try
	{
		Form paper("CONSTITUTION", 0, 150);
		std::cout << paper << "creating complete" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl  << "<_- TRYING TO CREATE RIGHT FORM AND SIGN IT WITH VALERA -_>" << std::endl;
	try
	{
		Form paper("Common Document", 70, 34);
		std::cout << paper << "creating complete" << std::endl;
		valera.sign_form(paper);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl  << "<_- TRYING TO SIGN RIGHT FORM FORM WITH VASYA -_>" << std::endl;
	try
	{
		Form paper("uncommon document", 69, 67);
		vasya.sign_form(paper);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}