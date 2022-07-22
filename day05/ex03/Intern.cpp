#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &init_obj)
{
	operator=(init_obj);
}

Intern::~Intern()
{
}

static Form *create_presidential(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}
static Form *create_robotomy(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}
static Form *create_shrubbery(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::make_form(std::string form_type, std::string target)
{
	t_intern_helper	stack[KNOWN_FORMS];

	stack[0].form_type = "presidential pardon";
	stack[0].get_form = create_presidential;
	stack[1].form_type = "robotomy request";
	stack[1].get_form = create_robotomy;
	stack[2].form_type = "shrubbery creation";
	stack[2].get_form = create_shrubbery;

	for (int i = 0; i < KNOWN_FORMS; i++)
	{
		if (form_type == stack[i].form_type)
			return (stack[i].get_form(target));
	}
	std::cout << "Unknown form standard" << std::endl;
	return (NULL);
}

Intern&	Intern::operator=(const Form &)
{
	return (*this);
}