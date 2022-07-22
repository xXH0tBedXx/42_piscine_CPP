#include "Fixed.hpp"

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits(const int raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point_value = raw;
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

Fixed		&Fixed::min(Fixed &fo, Fixed &so)
{
	return (fo < so ? fo : so);
}

const Fixed		&Fixed::min(const Fixed &fo, const Fixed &so)
{
	return (fo < so ? fo : so);
}

Fixed		&Fixed::max(Fixed &fo, Fixed &so)
{
	return (fo > so ? fo : so);
}

const Fixed		&Fixed::max(const Fixed &fo, const Fixed &so)
{
	return (fo > so ? fo : so);
}

Fixed::Fixed(void): _fixed_point_value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value): _fixed_point_value(value << this->_number_of_fractional_bits)
{
	// std::cout << "integer constructor called" << std::endl;
}

Fixed::Fixed(const float value): _fixed_point_value(roundf(value * (1 << _number_of_fractional_bits)))
{
	// std::cout << "float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &so)
{
	// std::cout << "Assignement operator called" << std::endl;
	if (this != &so)
		this->_fixed_point_value = so._fixed_point_value;
	return *this;
}

bool	Fixed::operator>(const Fixed &so) const
{
	return (this->getRawBits() > so.getRawBits());
}

bool	Fixed::operator<(const Fixed &so) const
{
	return (so > *this);
}

bool	Fixed::operator>=(const Fixed &so) const
{
	return (!(*this < so));
}

bool	Fixed::operator<=(const Fixed &so) const
{
	return (!(*this > so));
}

bool	Fixed::operator==(const Fixed &so) const
{
	return (so.getRawBits() == this->getRawBits());
}

bool	Fixed::operator!=(const Fixed &so) const
{
	return (!(so == *this));
}

Fixed	Fixed::operator+(const Fixed &so) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + so.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &so) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - so.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &so) const
{
	Fixed	result(this->toFloat() * so.toFloat());
	
	return (result);
}

Fixed	Fixed::operator/(const Fixed &so) const
{
	Fixed	result(this->toFloat() / so.toFloat());

	return (result);
}

Fixed	&Fixed::operator++(void)
{
	this->_fixed_point_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);

	++(*this);
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	this->_fixed_point_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);

	--(*this);
	return (old);
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed)
{
	// std::cout << "Insertion operator called" << std::endl;
	ostream << fixed.toFloat();
	return (ostream);
}
