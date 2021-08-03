#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;

	// i->makeSound(); //will output the cat sound!
	// j->makeSound();

	// meta->makeSound();

	// checkRef(j->getBrain(), j->getBrain(), 10);
	// const Animal* a = new Dog();
	// const Animal* b = new Dog();
	Dog a;
	Dog b;
	Dog::cmp(a,b);
	a = b;
	std::cout << "??????????????????????????" << '\n';
	Dog::cmp(a,b);
	return 0;
}