#ifndef KAREN_HPP
# define KAREN_HPP

# define count_key_words 4

# include <string>
# include <iostream>

class Karen
{

	public:
		void complain(std::string level);
		Karen();
		~Karen();

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif