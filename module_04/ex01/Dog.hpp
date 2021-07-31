#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	~Dog();
	Dog(const Dog &src);

	Dog & operator=(Dog const &rhs);

	void makeSound() const;
};

#endif