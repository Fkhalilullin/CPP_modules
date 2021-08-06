#include "Animal.hpp"

Animal::Animal() : _type("Animal") {};

Animal::~Animal() {};

Animal::Animal(const Animal &src) {
	*this = src;
}

Animal & Animal::operator=(Animal const &rhs) {
	this->_type = rhs.getType();
	return *this;
}

std::string Animal::getType() const {
	return this->_type;
}