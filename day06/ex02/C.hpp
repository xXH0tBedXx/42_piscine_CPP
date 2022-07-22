#ifndef C_HPP
# define C_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class C : public Base
{
	private:
		std::string	secret;
	public:
		C(void);
		~C(void);
		const std::string&	whoIm(void) const;
};

std::ostream&			operator<<(std::ostream& out, const C& src);

#endif