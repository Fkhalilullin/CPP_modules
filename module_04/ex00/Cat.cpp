#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->_type = "Garfield";
}
Cat::~Cat() {}
Cat::Cat(const Cat &src) {
	*this = src;
}

Cat & Cat::operator=(Cat const &rhs) {
	this->_type = rhs.getType();
	return *this;
}

void Cat::makeSound() const {
	std::cout << "In the history of mankind, no two people have" << " " <<
	"ever been able to agree on the toppings for pizza" << std::endl;
}
