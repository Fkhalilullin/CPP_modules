#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->_type = "Garfield";
}
WrongCat::~WrongCat() {}
WrongCat::WrongCat(const WrongCat &src) {
	*this = src;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs) {
	this->_type = rhs.getType();
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "In the history of mankind, no two people have" << " " <<
	"ever been able to agree on the toppings for pizza" << std::endl;
}
