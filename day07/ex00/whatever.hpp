#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void		swap(T& a, T& b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template <typename T>
T min(const T& lhs, const T& rhs)
{
    return (lhs < rhs ? lhs : rhs);
}

template<typename T>
const T&	max(const T& lhs, const T& rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

#endif