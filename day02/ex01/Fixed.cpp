#include "Fixed.hpp"

Fixed::Fixed(void): _fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value): _fixed_point_value(value << this->_number_of_fractional_bits)
{
	std::cout << "integer constructor called" << std::endl;
}

Fixed::Fixed(const float value): _fixed_point_value(roundf(value * (1 << _number_of_fractional_bits)))
{
	std::cout << "float constructor called" << std::endl;	
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &so)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &so)
		this->_fixed_point_value = so._fixed_point_value;
	return *this;
}

int	Fixed::toInt(void) const
{
	// std::cout << "Method toInt called" << std::endl;
	return (this->_fixed_point_value >> this->_number_of_fractional_bits);
}

float	Fixed::toFloat(void) const
{
	// std::cout << "Method toFloat called" << std::endl;
	return ((float)this->_fixed_point_value / (1 << _number_of_fractional_bits));
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed)
{
	// std::cout << "Insertion operator called" << std::endl;
	ostream << fixed.toFloat();
	return (ostream);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point_value = raw;
}
