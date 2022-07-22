#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	public:
		Span();
		Span(size_t storedSize);
		Span(const Span& init);
		~Span();

		Span&				operator=(const Span& other);

		void				addNumber(int number);
		int					shortestSpan(void) const;
		int					longestSpan(void) const;
		size_t				getCurrentSize(void) const;
		size_t				getMaxSize(void) const;
		size_t				getSpaceLeft(void) const;
	private:
		size_t				_storedSize;
		std::vector<int>	_storage;
};

std::ostream	&operator<<( std::ostream &ostr, const Span &instance );

#endif