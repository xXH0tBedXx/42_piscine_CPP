#include <iostream>
#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <list>
#define SIZE	5
#define NORMAL	"\033[0m"
#define GREEN	"\033[32m"
#define ORANGE	"\033[31m"

int	main(void)
{
	srand(time(0));
	int num;
	std::cout << "**********CREATING_MUTANTSTACK<INT>**********" << std::endl;
	{
		MutantStack<int>	mstack;
		std::cout << GREEN << "PUSH 101 in stack" << NORMAL << std::endl;
		mstack.push(101);
		std::cout << "Stack size: " << mstack.size() << std::endl;
		for (int i = 0; i < 4; i++)
		{
			num = rand() % 100;
			std::cout << GREEN << "PUSH " << num << " in stack" << NORMAL << std::endl;
			mstack.push(num);
			std::cout << "Stack size: " << mstack.size() << std::endl;
		}
		MutantStack<int>::iterator itBegin = mstack.begin();
		MutantStack<int>::iterator itEnd = mstack.end();
		std::cout << std::endl << "increment itBegin" << std::endl;
		++itBegin;
		std::cout  << ORANGE << "Begin in iterator: " << *itBegin << "(" << *mstack.begin() << " - in stack)" << NORMAL <<std::endl;
		while (itBegin != itEnd)
		{
			std::cout << *itBegin << " - now we are here!" << std::endl;
			++itBegin;
		}
		std::cout << std::endl << "NOW LETS" << GREEN << " POP IT!!!" << NORMAL << std::endl; 
		std::stack<int>		s(mstack);
		while (!s.empty())
		{
			std::cout << s.top() << " are POPED :)" << std::endl;
			s.pop();
		}
	}
	std::cout << std::endl;
	std::cout << "**********CREATING_STD::LIST<INT>**********" << std::endl;
	{
		std::list<int>	lst;
		std::cout << GREEN << "PUSH 101 in stack" << NORMAL << std::endl;
		lst.push_back(101);
		std::cout << "Stack size: " << lst.size() << std::endl;
		for (int i = 0; i < 4; i++)
		{
			num = rand() % 100;
			std::cout << GREEN << "PUSH " << num << " in stack" << NORMAL << std::endl;
			lst.push_back(num);
			std::cout << "Stack size: " << lst.size() << std::endl;
		}
		std::list<int>::iterator itBegin = lst.begin();
		std::list<int>::iterator itEnd = lst.end();
		std::cout << std::endl << "increment itBegin" << std::endl;
		++itBegin;
		std::cout  << ORANGE << "Begin in iterator: " << *itBegin << "(" << *lst.begin() << " - in stack)" << NORMAL <<std::endl;
		while (itBegin != itEnd)
		{
			std::cout << *itBegin << " - now we are here!" << std::endl;
			++itBegin;
		}
		std::cout << std::endl << "NOW LETS" << GREEN << " POP IT!!!" << NORMAL << std::endl; 
		std::list<int>		s(lst);
		while (!s.empty())
		{
			std::cout << s.back() << " are POPED :)" << std::endl;
			s.pop_back();
		}
	}
	return 0;
}