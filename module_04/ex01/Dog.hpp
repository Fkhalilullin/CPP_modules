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
	static void cmp(Dog &a, Dog &b);
	static void	checkRef(Brain* firstBrain, Brain* secondBrain, int nbr);
private:
	Brain* _brain;
};

#endif