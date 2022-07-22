#pragma once

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	std::string	picture;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm(const std::string, const unsigned short, const unsigned short);
	ShrubberyCreationForm(const std::string target_name);
	~ShrubberyCreationForm();

	void	execute(const Beureucrat&);

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm&);
};