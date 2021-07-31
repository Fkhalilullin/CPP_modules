#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &src);

	WrongAnimal & operator=(WrongAnimal const &rhs);

	void makeSound() const;
	std::string getType() const;

protected:
	std::string _type;
};

#endif