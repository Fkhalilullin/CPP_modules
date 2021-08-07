#include "Character.hpp"

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < this->_count; i++) {
		if (_materiaCharacter[i]) {
			delete _materiaCharacter[i];
		}
		_materiaCharacter[i] = nullptr;
	}
	this->_count = 0;
}

Character::Character() : _name("NoName") {

	for (int i = 0; i < 4; i++) {
		_materiaCharacter[i] = nullptr;
	}
}

Character::~Character() {
	for (int i = 0; i < this->_count; i++) {
		if (_materiaCharacter[i]) {
			delete _materiaCharacter[i]; 
		}
		_materiaCharacter[i] = nullptr;
	}
}

Character::Character(const Character &src) {
	this->_name = src.getName();
	this->_count = src.getCount();
	for (int i = 0; i < 4; i++) {
		if (_materiaCharacter[i])
			delete _materiaCharacter[i];
		this->_materiaCharacter[i] = src.getMateriaCharacter(i);
	}
}

Character & Character::operator=(Character const &rhs) {
	this->_name = rhs.getName();
	this->_count = rhs.getCount();
	for (int i = 0; i < 4; i++) {
		if (_materiaCharacter[i])
			delete _materiaCharacter[i];
		this->_materiaCharacter[i] = rhs.getMateriaCharacter(i);
	}
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m)
{
	if (this->_count == 4)
		return ;
	for (int i = 0; i < this->_count; ++i) {
		if (this->_materiaCharacter[i] == m)
			return ;
	}
	this->_materiaCharacter[this->_count++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || this->_count <= idx)
		return ;
	this->_materiaCharacter[idx] = nullptr;
	this->_count--;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || this->_count <= idx)
		return ;
	this->_materiaCharacter[idx]->use(target);
}

AMateria* Character::getMateriaCharacter(int idx) const {
	return this->_materiaCharacter[idx];
}

int Character::getCount() const {
	return this->_count;
}