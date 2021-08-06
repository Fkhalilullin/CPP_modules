
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &src);

	Animal & operator=(Animal const &rhs);

	virtual void	makeSound() const = 0;
	std::string		getType() const;
protected:
	std::string _type;
};

#endif