#ifndef B_HPP
# define B_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class B : public Base
{
	private:
		std::string	secret;
	public:
		B(void);
		~B(void);
		const std::string&	whoIm(void) const;
};

std::ostream&			operator<<(std::ostream& out, const B& src);

#endif	