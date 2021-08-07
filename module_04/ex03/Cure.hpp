#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria {

public:
	Cure(std::string const & type);
	Cure();
	~Cure();
	Cure(const Cure & src);

	Cure & operator=(Cure const &rhs);

	AMateria* clone() const;
	void use(ICharacter & target);
};

#endif