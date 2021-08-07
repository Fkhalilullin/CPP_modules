#include "Character.hpp"

Character::Character(std::string name) : _name(name) {
	//write malloc backpack
}

Character::Character() : _name("NoName") {
	//write malloc backpack
}

Character::~Character() {
	//free
}

Character::Character(const Character &src) {
	*this = src;
	//write deep copy
}

std::string const & Character::getName() const {
	return this->_name;
}

void equip(AMateria* m) {
	//???
}

void unequip(int idx) {
	//???
}

void use(int idx, ICharacter& target) {
	//???
}