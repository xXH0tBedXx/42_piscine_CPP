#include "B.hpp"

B::B(void)
{
	this->secret = "I'm B!";
}

B::~B(void)
{
}

const std::string&	B::whoIm(void) const
{
	return this->secret;
}

std::ostream&		operator<<(std::ostream& out, const B& src)
{
	out << src.whoIm() << std::endl;
	return out;
}