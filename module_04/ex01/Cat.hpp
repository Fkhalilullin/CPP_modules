#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	~Cat();
	Cat(const Cat &src);

	Cat & operator=(Cat const &rhs);

	void makeSound() const;
	void checkRef(Brain firstBrain, Brain secondBrain, int nbr);
private:
	Brain* _brain;
};

#endif