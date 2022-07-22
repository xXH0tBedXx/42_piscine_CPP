#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		void	execute(const Beureucrat&);
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm(const std::string, const unsigned short, const unsigned short);
		PresidentialPardonForm(const std::string target_name);
		~PresidentialPardonForm();
		PresidentialPardonForm&	operator=(const PresidentialPardonForm&);
};