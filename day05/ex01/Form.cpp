#include "Form.hpp"

Form::Form() : name("NONAME"), grade_required(MIN_GRADE), grade_execute(MIN_GRADE)
{}

Form::Form(const std::string name, const unsigned short gr, unsigned short ge): name(name), grade_required(gr), grade_execute(ge)
{
	if (gr > MIN_GRADE || ge > MIN_GRADE)
		throw GradeTooLowException();
	if (gr < MAX_GRADE || ge < MAX_GRADE)
		throw GradeTooHighException();
}

Form::Form(const Form &init_obj): name(init_obj.name), grade_required(init_obj.grade_required), grade_execute(init_obj.grade_execute), is_signed(false)
{}

Form::~Form()
{}

std::string	Form::get_name() const
{
	return (this->name);
}

unsigned short	Form::get_grade_required() const
{
	return (this->grade_required);
}

unsigned short	Form::get_grade_execute() const
{
	return (this->grade_execute);
}

bool	Form::get_sign() const
{
	return (this->is_signed);
}

void	Form::be_signed(Beureucrat &signer)
{
	if (signer.get_grade() > this->grade_required)
		throw Beureucrat::GradeTooLowException();
	else
		this->is_signed = true;
}

Form	&Form::operator=(const Form&)
{
	new (this)	Form(*this);
	return (*this);
}

std::ostream&	operator<<(std::ostream &stream, Form &obj)
{
	stream << "name(" << obj.get_name() << "), grade_to_required(" << obj.get_grade_required() << "), grade_to_execute(" << obj.get_grade_execute()	<< ") ";
	
	if (obj.get_sign())
		stream << "[SIGNED]";
	else
		stream << "[NOT SIGNED]";

	return (stream);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("[EXCEPTION]: Grade value too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("[EXCEPTION]: Grade value too low");
}