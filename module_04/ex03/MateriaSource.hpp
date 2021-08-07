#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	_materiaSource[4];
	int			_count;
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource & src);

	MateriaSource & operator=(MateriaSource const &rhs);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);

	int getCount() const;
	AMateria* getMateriaSource(int idx) const;
};

#endif