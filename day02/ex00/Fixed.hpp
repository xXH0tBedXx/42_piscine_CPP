#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
class Fixed
{
	public:
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		Fixed();
		Fixed(const Fixed &src);
		~Fixed();
		Fixed	&operator=(const Fixed &other);
	private:
		int					_fixed_point_value;
		static const int	_number_of_fractional_bits = 8;
};

#endif