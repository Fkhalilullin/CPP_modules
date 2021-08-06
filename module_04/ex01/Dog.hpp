#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	~Dog();
	Dog(const Dog &src);

	Dog & operator=(Dog const &rhs);

	void		makeSound() const;
	Brain *		getBrain() const;
	static void	checkRef(Dog& firstDog, Dog& secondDog);
private:
	Brain* _brain;
};

#endif