#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < this->_count; i++) {
		_materiaSource[i] = nullptr;
	}
	this->_count = 0;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_materiaSource[i])
			delete _materiaSource[i];
		_materiaSource[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	for (int i = 0; i < this->_count; i++) {
		this->_materiaSource[i] = src.getMateriaSource(i);
	}
	this->_count = src.getCount();
}

MateriaSource & MateriaSource::operator=(MateriaSource const &rhs) {
	for (int i = 0; i < 4; i++) {
		if (this->_materiaSource[i])
			delete this->_materiaSource[i];
		this->_materiaSource[i] = rhs.getMateriaSource(i);
	}
	this->_count = rhs.getCount();
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (this->_count == 4)
		return ;
	_materiaSource[this->_count++] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < this->_count; i++) {
		if (!this->_materiaSource[i]->getType().compare(type)) {
			return(this->_materiaSource[i]->clone());
		}
	}
	return(nullptr);
}

int MateriaSource::getCount() const {
	return this->_count;
}

AMateria* MateriaSource::getMateriaSource(int idx) const {
	return (this->_materiaSource[idx]);
}