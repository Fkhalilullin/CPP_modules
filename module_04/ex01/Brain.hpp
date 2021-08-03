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
	
	std::string getRandom(int random_variable);
	std::string getIdeas(int var);
	std::string * getRef(int var);
	std::string * getBrainIdeas();
};

#endif