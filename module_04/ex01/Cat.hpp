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
	Brain *		getBrain() const;
	static void	checkRef(Cat& firstCat, Cat& secondCat);
private:
	Brain* _brain;
};

#endif