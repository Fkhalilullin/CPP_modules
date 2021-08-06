#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->_type = "Scooby";
	this->_brain = new Brain();
}

Dog::~Dog() {
	if (this->_brain)
		delete _brain;
}

Dog::Dog(const Dog &src) {

	*this = src;
	for (int i = 0; i < 100; i++) {
	this->_brain->getBrainIdeas()[i] = src._brain->getBrainIdeas()[i];
	}
}

Dog & Dog::operator=(Dog const &rhs) {
	
	if(this->_brain)
		delete this->_brain;

	this->_type = rhs.getType();
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++) {
		this->_brain->getBrainIdeas()[i] = rhs._brain->getBrainIdeas()[i];
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Scooby Dooby DooOOooOO" << std::endl;
}

Brain * Dog::getBrain() const {
	return (this->_brain);
}

void Dog::checkRef(Dog& firstDog, Dog& secondDog) {
	for (int i = 0; i < 5; i++) {
	std::cout << "first ref: " << firstDog.getBrain()->getIdeas(i) 
	<< " " << firstDog.getBrain()->getRef(i) << std::endl;

	std::cout << "second ref: " << secondDog.getBrain()->getIdeas(i)
	<< " " << secondDog.getBrain()->getRef(i) << std::endl;
	std::cout << std ::endl;
	}
}