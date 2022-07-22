#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "CREATING ANIMAL" << std::endl;
	const Animal* meta = new Animal();
	std::cout << "CREATING DOG" << std::endl;
	const Animal* dog = new Dog();
	std::cout << "CREATING CAT" << std::endl;
	const Animal* cat = new Cat();
	std::cout << "CAT SAYS: "; cat->make_sound(); 
	std::cout << "DOG SAYS: "; dog->make_sound();
	std::cout << "META SAYS: "; meta->make_sound();
	delete meta;
	delete dog;
	delete cat;
	std::cout << "creating definetly NOT A DOG!!!" << std::endl;
	const WrongAnimal *DOG = new WrongCat();
	std::cout << "NOT A DOG SAYS: "; DOG->make_sound();
	delete DOG;
	return 0;
}