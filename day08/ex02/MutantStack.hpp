#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack();
		MutantStack(const MutantStack<T>& init);
		~MutantStack();

		MutantStack<T>&		operator=(const MutantStack<T>& other);

		iterator			begin(void);
		iterator			end(void);
};

#endif