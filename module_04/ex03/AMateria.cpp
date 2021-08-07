#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) {
	this->_type = type;
}

AMateria::AMateria() {
	this->_type = "NoType";
}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria & AMateria::operator=(AMateria const &rhs) {
	this->_type = rhs.getType();
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	target.getName();
}