#include "Beureucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>
#include <string>
#include <ctime>

using std::cout;
using std::endl;

class RobotomyRequestForm;
class PresidentialPardonForm;
class ShrubberyCreationForm;

int	main()
{
	cout << "*** PresidentialPardonForm ***" << endl;
	Beureucrat	ministr("Eugeniy", 1);
	Beureucrat	sam("Samuel", 3);
	Beureucrat	enena("lexa", 34);
	Beureucrat	frodo("Fedor", 24);
	PresidentialPardonForm	paper("Constitution", 25, 5);
	try
	{
		frodo.sign_form(paper);
		paper.execute(frodo);
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	cout << "***************************************" << endl;
	try
	{
		sam.sign_form(paper);
		paper.execute(sam);
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	cout << "***************************************" << endl;
	cout << "********* RobotomyRequestForm *********" << endl;
	cout << "***************************************" << endl;
	RobotomyRequestForm	paper_two("Declaration", 72, 45);
	try
	{
		enena.sign_form(paper_two);
		paper_two.execute(enena);
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	cout << "***************************************" << endl;
	cout << "******** ShrubberyCreationForm ********" << endl;
	cout << "***************************************" << endl;
	ShrubberyCreationForm	paper_three;
	try
	{
		ministr.sign_form(paper_three);
		paper_three.execute(ministr);
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	return (0);
}