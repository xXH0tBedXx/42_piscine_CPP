#ifndef A_HPP
# define A_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class A : public Base
{
	private:
		std::string	secret;
	public:
		A(void);
		~A(void);
		const std::string&	whoIm(void) const;
};

std::ostream&			operator<<(std::ostream& out, const A& src);

#endif