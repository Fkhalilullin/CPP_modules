#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();

	meta->makeSound();

	std::cout << std::endl << "Before copy: " << std::endl;
	Dog firstDog;
	Dog secondDog;

	Dog::checkRef(firstDog, secondDog);

	firstDog = secondDog;

	std::cout << "After copy: " << std::endl;
	Dog::checkRef(firstDog, secondDog);

	std::cout << "Copy construction: " << std::endl;
	Dog thirdDog(firstDog);
	Dog::checkRef(thirdDog, firstDog);

	delete meta;
	delete j;
	delete i;
	
	return 0;
}