#include "C.hpp"

C::C(void)
{
	this->secret = "I'm C!";
}

C::~C(void)
{
}

const std::string&	C::whoIm(void) const
{
	return this->secret;
}

std::ostream&		operator<<(std::ostream& out, const C& src)
{
	out << src.whoIm() << std::endl;
	return out;
}