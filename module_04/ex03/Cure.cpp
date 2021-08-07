#include "Cure.hpp"

Cure::Cure(std::string const & type) : AMateria("cure") {}

Cure::Cure() : AMateria() {
	this->_type = "cure";
}

Cure::~Cure() {}

Cure::Cure(const Cure & src) {
	*this = src;
}

Cure & Cure::operator=(Cure const &rhs) {
	this->_type = rhs.getType();
	return *this;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter & target) {
	std::cout << "* heals " <<  target.getName() << " wounds * " << std::endl;
}

