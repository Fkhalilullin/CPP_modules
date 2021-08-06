#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) {
	std::cout << "constructor with type called\n";
	this->_type = type;
}

AMateria::AMateria() {
	std::cout << "constructor called\n";
	this->_type = "no_spell";
}

AMateria::~AMateria() {
	std::cout << "destructor called\n";
}

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria & AMateria::operator=(AMateria const &rhs) {
	this->_type = rhs.getType();
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	//??????????????????????
}