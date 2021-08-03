#include "Brain.hpp"

Brain::Brain() {
	std::srand(std::time(nullptr));
    int random_variable = std::rand();
	static int a = 0;
	for (int i = 0; i < 100; i++) {
		random_variable = a + std::rand()/((RAND_MAX + 1u)/5);
		this->_ideas[i] = getRandom(random_variable);
		// std::cout << random_variable << std::endl;
	}
	a++;
}

Brain::~Brain() {}; 

std::string Brain::getRandom(int random_variable) {
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
	return ("NoName");
}

Brain::Brain(const Brain &src) {
	*this = src;
}

Brain & Brain::operator=(Brain const &rhs) {
	for (int i = 0; i < 100; i++) { //CHECK
		this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

std::string Brain::getIdeas(int var) {
	return this->_ideas[var];
}

std::string * Brain::getRef(int var) {
	return &(this->_ideas[var]);
}

std::string * Brain::getBrainIdeas() {
	return (this->_ideas);
}