#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->_type = "Scooby";
}

Dog::~Dog() {}

Dog::Dog(const Dog &src) {
	*this = src;
}

Dog & Dog::operator=(Dog const &rhs) {
	this->_type = rhs.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Scooby Dooby DooOOooOO" << std::endl;
}
