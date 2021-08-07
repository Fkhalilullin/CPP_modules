#include "Cure.hpp"

Cure::Cure(std::string const & type) : AMateria("cure") {}

Cure::Cure() : AMateria() {}

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

void use(ICharacter & target) {
	//Dopisatj
}

