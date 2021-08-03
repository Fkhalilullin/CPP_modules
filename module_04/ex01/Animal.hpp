
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
public:
	Animal();
	~Animal();
	Animal(const Animal &src);

	Animal & operator=(Animal const &rhs);

	virtual void	makeSound() const;
	std::string		getType() const;
	// void			checkRef(Brain firstBrain, Brain secondBrain, int nbr);
protected:
	std::string _type;
};

#endif