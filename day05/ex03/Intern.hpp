#pragma once

#include <string>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define KNOWN_FORMS	3

class Intern
{
	public:
		Form*	make_form(std::string, std::string);
		Intern();
		Intern(const Intern&);
		~Intern();
		Intern&	operator=(const Form&);
};

typedef struct	s_intern_helper
{
	std::string	form_type;
	Form*		(*get_form) (const std::string&);
}	t_intern_helper;