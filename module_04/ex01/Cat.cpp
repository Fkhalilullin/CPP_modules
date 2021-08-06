#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->_type = "Garfield";
	this->_brain = new Brain();
}

Cat::~Cat() {
	if (this->_brain)
		delete _brain;
}

Cat::Cat(const Cat &src) {
	*this = src;
	for (int i = 0; i < 100; i++) {
	this->_brain->getBrainIdeas()[i] = src._brain->getBrainIdeas()[i];
	}
}

Cat & Cat::operator=(Cat const &rhs) {
	if(this->_brain)
		delete this->_brain;

	this->_type = rhs.getType();
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++) {
		this->_brain->getBrainIdeas()[i] = rhs._brain->getBrainIdeas()[i];
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "In the history of mankind, no two people have" << " " <<
	"ever been able to agree on the toppings for pizza" << std::endl;
}

Brain * Cat::getBrain() const {
	return (this->_brain);
}

void Cat::checkRef(Cat& firstCat, Cat& secondCat) {
	for (int i = 0; i < 5; i++) {
	std::cout << "first ref: " << firstCat.getBrain()->getIdeas(i) 
	<< " " << firstCat.getBrain()->getRef(i) << std::endl;

	std::cout << "second ref: " << secondCat.getBrain()->getIdeas(i)
	<< " " << secondCat.getBrain()->getRef(i) << std::endl;
	std::cout << std ::endl;
	}
}