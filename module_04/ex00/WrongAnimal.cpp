#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {};
WrongAnimal::~WrongAnimal() {};
WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	*this = src;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs) {
	this->_type = rhs.getType();
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->_type;
}

void WrongAnimal::makeSound() const { 
	std::cout << "WrongAnimal say's Shiiiiiiiiiiiiiiish" << std::endl;
}