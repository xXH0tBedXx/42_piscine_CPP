#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		int						getRawBits(void) const;
		void					setRawBits(const int raw);
		int						toInt(void) const;
		float					toFloat(void) const;
		static Fixed			&min(Fixed &fo, Fixed &so);
		static const Fixed		&min(const Fixed &fo, const Fixed &so);
		static Fixed			&max(Fixed &fo, Fixed &so);
		static const Fixed		&max(const Fixed &fo, const Fixed &so);
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed			&operator=(const Fixed &other);
		bool			operator>(const Fixed &so) const;
		bool			operator<(const Fixed &so) const;
		bool			operator>=(const Fixed &so) const;
		bool			operator<=(const Fixed &so) const;
		bool			operator==(const Fixed &so) const;
		bool			operator!=(const Fixed &so) const;
		Fixed			operator+(const Fixed &so) const;
		Fixed			operator-(const Fixed &so) const;
		Fixed			operator*(const Fixed &so) const;
		Fixed			operator/(const Fixed &so) const;
		Fixed			&operator++(void);
		Fixed			operator++(int);
		Fixed			&operator--(void);
		Fixed			operator--(int);
	private:
		int					_fixed_point_value;
		static const int	_number_of_fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &ostr, Fixed const &fixed);

#endif
