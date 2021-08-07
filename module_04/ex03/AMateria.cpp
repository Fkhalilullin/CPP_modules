#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) {
	std::cout << "constructor AMateria with type called\n";
	this->_type = type;
}

AMateria::AMateria() {
	std::cout << "constructor AMateria called\n";
	this->_type = "NoType";
}

AMateria::~AMateria() {
	std::cout << "destructor AMateria called\n";
}

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
	// gettype()
	}