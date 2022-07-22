#ifndef FORM_HPP
# define FORM_HPP

# include "Beureucrat.hpp"

class Beureucrat;

class Form
{
	public:
		std::string			get_name(void) const;
		unsigned short		get_grade_required(void) const;
		unsigned short		get_grade_execute(void) const;
		bool				get_sign(void) const;
		void				be_signed(Beureucrat&);
		virtual void		execute(const Beureucrat&) = 0;
		Form();
		Form(const Form&);
		Form(const std::string name, const unsigned short, const unsigned short);
		~Form();
		Form	&operator=(const Form&);
	protected:
		const std::string		name;
		const unsigned short	grade_required;
		const unsigned short	grade_execute;
		bool					is_signed;

		class GradeTooHighException : public std::exception
		{
		public:
			const char*	what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
		public:
			const char*	what(void) const throw();
		};

		class NotSignedException : public std::exception
		{
		public:
			const char* what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream&, Form&);

#endif