#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
private: 
	std::string	_name;
	AMateria*	_materiaCharacter[4];
public:
	Character(std::string name);
	Character();
	~Character();
	Character(const Character &src);

	Character & operator=(Character const &rhs);
	
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif