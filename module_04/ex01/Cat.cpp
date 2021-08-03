#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->_type = "Garfield";
	this->_brain = new Brain();
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

void Cat::checkRef(Brain firstBrain, Brain secondBrain, int nbr) {
	if (nbr > 100 || nbr < 0)
		return ;
	std::cout << "first ref: " << &firstBrain << std::endl;
	std::cout << "second ref " << &secondBrain << std::endl;
}

