#include "Brain.hpp"



Brain::Brain() {
    int random_variable = std::rand();
	std::srand(std::time(nullptr));
	for (int i = 0; i < 100; i++) {
		random_variable = std::rand() % 5; 
		this->_ideas[i] = getRandom();
		std::cout << random_variable << std::endl;
	}
}

Brain::~Brain() {}; 

std::string getRandom(int random_variable) {
	if (random_variable == 0)
		return ("poop");
	else if (random_variable == 1)
		return ("walking");
	else if (random_variable == 2)
		return ("sleeping");
	else if (random_variable == 3)
		return ("watching");
	else if (random_variable == 4)
		return ("eating");
}

Brain::Brain(const Brain &src) {
	for (int i = 0; i < 100; i++) { //CHECK
		this->_ideas[i] = src._ideas[i];
	}
}

Brain & Brain::operator=(Brain const &rhs) {
	for (int i = 0; i < 100; i++) { //CHECK
		this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

void Brain::checkRef(Brain firstBrain, Brain secondBrain, int nbr) {
	
}


