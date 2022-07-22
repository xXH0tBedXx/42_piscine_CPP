#ifndef BEUREUCRAT_HPP
# define BEUREUCRAT_HPP

# include <string>
# include <iostream>
# include <ostream>
# include <stdexcept>
# include "Form.hpp"

# define	MAX_GRADE	1
# define	MIN_GRADE	150

class Form;

class Beureucrat
{
	public:
		int					get_grade(void) const;
		const std::string	get_name(void) const;
		Beureucrat			increment(void);
		Beureucrat			decrement(void);
		void				sign_form(Form&);
		Beureucrat();
		Beureucrat(const Beureucrat&);
		Beureucrat(std::string, short int);
		~Beureucrat();
		Beureucrat&	operator=(const Beureucrat&);
		class	GradeTooHighException : public std::exception
		{
		public:
			const char* what(void) const throw();
		};
		class	GradeTooLowException : public std::exception
		{
		public:
			const char* what(void) const throw();
		};
	private:
		const std::string	name;
		short int			grade;
};

std::ostream&	operator<<(std::ostream&, Beureucrat&);

#endif