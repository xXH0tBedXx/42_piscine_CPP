#include <iostream>
#include <stdint.h>
#include "main.hpp"

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	Data*		ptr = new Data;
	Data*		new_ptr = NULL;
	uintptr_t	raw;
	int i = 0;
	ptr->x = 5;
	ptr->y = 5;
	while(i < 2)
	{
		std::cout << "ptr FROM original ptr before serialize" << std::endl;
		std::cout << "ptr->x = " << ptr->x << " and ptr->y = " << ptr->y << std::endl << std::endl;

		raw = serialize(ptr);
		std::cout << "SIZE ptr = " << sizeof(ptr) << " and value = " << ptr << std::endl;
		std::cout << "SIZE data struct in ptr = " << sizeof(*ptr) << std::endl;
		std::cout << "SIZE raw value serialize = " << sizeof(raw) << " and value = " << raw << std::endl << std::endl;

		std::cout << "new_ptr FROM deserialize raw" << std::endl;
		new_ptr = deserialize(raw);
		std::cout << "new_ptr->x = " << new_ptr->x << " and new_ptr->y = " << new_ptr->y << std::endl;
		std::cout << "_________________________________________" << std::endl;
		ptr->x++;
		ptr->y--;
		i++;
	}
	return 0;
}