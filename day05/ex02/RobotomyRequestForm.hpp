#pragma once

#include <random>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		void	execute(const Beureucrat&);
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm(const std::string, const unsigned short, const unsigned short);
		~RobotomyRequestForm();
		RobotomyRequestForm&	operator=(const RobotomyRequestForm&);
	private:
		bool	is_successful;
};