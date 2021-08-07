#include "Ice.hpp"

Ice::Ice(std::string const & type) : AMateria("ice") {} // write new class for others spells

Ice::Ice() : AMateria() {}

Ice::~Ice() {}

Ice::Ice(const Ice & src) {
	*this = src;
}

Ice & Ice::operator=(Ice const &rhs) {
	this->_type = rhs.getType();
	return *this;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void use(ICharacter & target) {
	//Dopisatj// 
	// std cout ice bolt v
	// Amateria::use()
	// i nanes 200 urona
}

