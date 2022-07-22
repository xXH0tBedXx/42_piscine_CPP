#ifndef BEUREUCRAT_HPP
# define BEUREUCRAT_HPP

# include <string>
# include <iostream>
# include <ostream>
# include <stdexcept>

# define	MAX_GRADE	1
# define	MIN_GRADE	150

class Beureucrat
{
	public:
		int					get_grade(void);
		const std::string	get_name(void);
		Beureucrat			increment(void);
		Beureucrat			decrement(void);
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