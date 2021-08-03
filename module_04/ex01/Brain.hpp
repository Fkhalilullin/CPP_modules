#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <ctime>
#include "Animal.hpp"

class Brain {
private:
	std::string _ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain &src);

	Brain & operator=(Brain const &rhs);
	
	std::string getRandom();
	void		checkRef(Brain firstBrain, Brain secondBrain, int nbr);
};

#endif