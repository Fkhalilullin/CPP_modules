#include "Ice.hpp"

Ice::Ice(std::string const & type) : AMateria("ice") {}

Ice::Ice() : AMateria() {
	this->_type = "ice";
}

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

void Ice::use(ICharacter & target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

