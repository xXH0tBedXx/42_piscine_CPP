#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <cmath>
# include <string>
# include <iostream>
# include <stdexcept>
# include <limits>
# define SPECIAL_VALUES_COUNT 4

class Converter
{
	public:
		void		analyze_input(char*);
		void		print_result(void) const;
		void		help(void) const;
		Converter();
		Converter(const Converter&);
		~Converter();
		Converter	&operator=(const Converter &rhs);
		class EmptyInput : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return "Empty input do not allowed!";
			}
		};

		class NotAnalyze : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return "Not a valid char, int, float or double for analyze!";
			}
		};
	private:
		enum t_type
		{
			NoneType = -1,
			CharType,
			IntType,
			FloatType,
			DoubleType
		};
		t_type		_selType;
		char		_charRes;
		int			_intRes;
		float		_floatRes;
		double		_doubleRes;
		char*		_input;
		static const std::string	floatSpecial[SPECIAL_VALUES_COUNT];
		static const std::string	doubleSpecial[SPECIAL_VALUES_COUNT];
		void		reset(char*);
		bool		select(void);
		void		setValues(void);
		t_type		handleFloatingSpecial(void);
		t_type		handleNumeric(void);
		bool		possibleToChar(const double) const;
		bool		possibleToInt(const double) const;
		bool		possibleToFloat(const double) const;
		void		printChar(void) const;
		void		printInt(void) const;
		void		printFloat(void) const;
		void		printDouble(void) const;
		void		addDot(bool) const;
};

#endif