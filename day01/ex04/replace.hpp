#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

class replace
{
	private:
		std::ifstream	ifs;
		std::string		file;
		std::string		s1;
		std::string		s2;
		enum			errors
		{
			empty_file_path,
			empty_strings,
			else_error
		};
	public:
		void	error(int);
		replace();
		replace(std::string, std::string, std::string);
		~replace();
};
#endif