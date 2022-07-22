#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("SCF", 145, 137)
{
	this->picture = "               ,@@@@@@@,                      \n"
					"       ,,,.   ,@@@@@@/@@,  .oo8888o.          \n"
					"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o        \n"
					"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'     \n"
					"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'      \n"
					"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'       \n"
					"   `&%\\ ` /%&'    |.|        \\ '|8'         \n"
					"       |o|        | |         | |             \n"
					"       |.|        | |         | |             \n"
					"jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_  \n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &init_obj)
{
	this->picture = init_obj.picture;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const unsigned short gr, unsigned short ge)
	: Form(name, gr, ge)
{
	this->picture = "               ,@@@@@@@,                      \n"
					"       ,,,.   ,@@@@@@/@@,  .oo8888o.          \n"
					"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o        \n"
					"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'     \n"
					"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'      \n"
					"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'       \n"
					"   `&%\\ ` /%&'    |.|        \\ '|8'         \n"
					"       |o|        | |         | |             \n"
					"       |.|        | |         | |             \n"
					"jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_  \n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target_name) : Form(target_name, 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void	ShrubberyCreationForm::execute(const Beureucrat &executor)
{
	if (this->is_signed == false)
		throw Form::NotSignedException();

	if (executor.get_grade() < this->get_grade_execute())
	{
		std::ofstream	file("trees_shrubbery");

		if (file.is_open())
		{
			file << this->picture.c_str();
			std::cout << "There is some trees in your directory" << std::endl;
		}
		else
			std::cout << "[ERROR]: Couldn't open file" << std::endl;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm&)
{
	return (*this);
}