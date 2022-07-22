#include "Beureucrat.hpp"

Beureucrat::Beureucrat() : name("NONAME")
{}

Beureucrat::Beureucrat(std::string name, short int grade) : name(name)
{
	if (grade < MAX_GRADE)
		throw GradeTooHighException();
	else if (grade > MIN_GRADE)
		throw GradeTooLowException();
	this->grade = grade;
}

Beureucrat::Beureucrat(const Beureucrat &init_obj) : name(init_obj.name), grade(init_obj.grade)
{}

Beureucrat::~Beureucrat()
{}

int	Beureucrat::get_grade(void)
{
	return (this->grade);
}

const std::string	Beureucrat::get_name(void)
{
	return (this->name);
}

Beureucrat	Beureucrat::increment()
{
	if ((grade - 1) < MAX_GRADE)
		throw GradeTooHighException();
	else
		this->grade--;
	return (*this);
}

Beureucrat	Beureucrat::decrement()
{
	if ((grade + 1) > MIN_GRADE)
		throw GradeTooLowException();
	else
		this->grade++;
	return (*this);
}

void	Beureucrat::sign_form(Form &form)
{
	if (!form.get_sign())
	{
		if (this->grade <= form.get_grade_required())
		{
			form.be_signed(*this);
			std::cout << this->name << " signed " << form.get_name() << " form" << std::endl;
		}
		else
		{
			std::cout << this->name << " cannot sign form '" << form.get_name() << "' because he's not that powerfull" << std::endl;
		}
	}
	else
	{
		std::cout << form.get_name() << " form already signed..." << " - " << this->get_name() << " thought" << std::endl;
	}
}

Beureucrat	&Beureucrat::operator=(const Beureucrat &obj)
{
	if (this != &obj)
	{
		new (this) Beureucrat(obj);
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, Beureucrat &obj)
{
	stream << "[" << obj.get_name() << " - " << obj.get_grade() << "grd.]";
	return (stream);
}

const char* Beureucrat::GradeTooHighException::what() const throw()
{
	return ("[WARNING]: Grade value too high! Probably, you are cheater and will be destroyed after closing this programm");
}

const char* Beureucrat::GradeTooLowException::what() const throw()
{
	return ("[WARNING]: Grade value too low! Probably, you are too dumb even to become an ordinary Beureucrat... Try again later.");
}