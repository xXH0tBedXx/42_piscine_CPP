#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class 	Array
{
	private:
		size_t	_size;
		T*		_array;
	public:
		Array();
		Array(const unsigned int size);
		Array(const Array<T>& init);
		~Array();
		Array<T>&	operator=(const Array<T>& other);
		T&			operator[](const size_t ind) const;
		size_t		size(void) const;
};

#include "Array.tpp"

#endif