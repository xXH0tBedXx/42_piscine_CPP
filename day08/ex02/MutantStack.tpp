#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP
# include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void)
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& init)
{
	*this = init;
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T>& other)
{
	if (this != &other)
		this->c = other->c;
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{ 
	return this->c.begin(); 
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{ 
	return this->c.end(); 
}

#endif