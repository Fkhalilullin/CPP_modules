#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->_type = "Scooby";
	this->_brain = new Brain();
}

Dog::~Dog() {}

Dog::Dog(const Dog &src) {
	*this = src;
}

Dog & Dog::operator=(Dog const &rhs) {
	
	if(this->_brain)
		delete this->_brain;

	this->_type = rhs.getType();
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++) {
		this->_brain->getBrainIdeas()[i] = rhs._brain->getBrainIdeas()[i]; //Подумать
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Scooby Dooby DooOOooOO" << std::endl;
}

void Dog::checkRef(Brain* firstBrain, Brain* secondBrain, int nbr) {
	if (nbr > 100 || nbr < 0)
		return ;
	std::cout << "first ref: " << &firstBrain[nbr] << std::endl;
	std::cout << "second ref " << &secondBrain[nbr] << std::endl;
}

Brain * Dog::getBrain() const {
	return (this->_brain);
}

void Dog::cmp(Dog &a, Dog &b) {
	for (int i = 0; i < 10; i++) {

	std::cout << "first ref: " << a.getBrain()->getIdeas(i) 
	<< " " << a.getBrain()->getRef(i) << std::endl;

	std::cout << "first ref: " << b.getBrain()->getIdeas(i)
	<< " " << b.getBrain()->getRef(i) << std::endl;
	std::cout << std ::endl;
	}
}