#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <chrono>
#include <thread>

Base*	generate(void)
{
	srand(time(NULL));
	switch ((rand() % 3))
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return (NULL);
}

void	identify(Base *p)
{
	A*	a;
	B*	b;
	C*	c;
	if ((a = dynamic_cast<A*>(p)))
		std::cout << *a << std::endl;
	if ((b = dynamic_cast<B*>(p)))
		std::cout << *b << std::endl;
	if ((c = dynamic_cast<C*>(p)))
		std::cout << *c << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{}
}

int	main(void)
{
	{
		Base	*base;

		std::cout << "POINTER:" << std::endl;
		base = generate();
		identify(base);
		delete base;

		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "REFERENSE:" << std::endl;
		base = generate();
		identify(*base);
		delete base;
	}
	{
		Base	*base;

		std::cout << "POINTER:" << std::endl;
		base = generate();
		identify(base);
		delete base;

		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "REFERENSE:" << std::endl;
		base = generate();
		identify(*base);
		delete base;
	}
	{
		Base	*base;

		std::cout << "POINTER:" << std::endl;
		base = generate();
		identify(base);
		delete base;

		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "REFERENSE:" << std::endl;
		base = generate();
		identify(*base);
		delete base;
	}
	return 0;
}