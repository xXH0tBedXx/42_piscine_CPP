#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed			&operator=(const Fixed &other);
	private:
		int					_fixed_point_value;
		static const int	_number_of_fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &ostream, Fixed const &fixed);

#endif