#include "A.hpp"

A::A(void)
{
	this->secret = "I'm A!";
}

A::~A(void)
{
}

const std::string&	A::whoIm(void) const
{
	return this->secret;
}

std::ostream&		operator<<(std::ostream& out, const A& src)
{
	out << src.whoIm() << std::endl;
	return out;
}