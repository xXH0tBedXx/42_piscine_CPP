#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PPF", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm&)
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string name, const unsigned short gr, unsigned short ge): Form(name, gr, ge)
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string target_name) : Form(target_name, 25, 5)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::execute(const Beureucrat &executor)
{
	if (this->is_signed == false)
		throw Form::NotSignedException();

	if (executor.get_grade() < this->grade_execute)
	{
		std::cout << "You've been pardoned by Zafod Beeblebrox" << std::endl;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm&)
{
	return (*this);
}