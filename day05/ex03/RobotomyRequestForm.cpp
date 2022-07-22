#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("NONAME", 72, 45)
{
	srand(time(NULL));
	this->is_successful = std::rand() % 1;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &init_obj)
{
	this->is_successful = init_obj.is_successful;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, const unsigned short gr, unsigned short ge)
	: Form(name, gr, ge)
{
	this->is_successful = (std::rand() % 1);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target_name) : Form(target_name, 72, 45)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::execute(const Beureucrat &victim)
{
	if (victim.get_grade() < this->get_grade_execute())
	{
		if (this->is_successful)
			std::cout << victim.get_name() << " successfuly robotomized" << std::endl;
		else
			std::cout << victim.get_name() << "... died or smthng. I don't lnow" << std::endl;
	}
	else
	{
		throw Form::GradeTooHighException();
	}
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm&)
{
	return (*this);
}