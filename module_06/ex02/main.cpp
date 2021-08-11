#include <iostream>
#include "Classes.hpp"
#include "time.h"

Base * generate(void) {
	srand(time(NULL));
	int var = rand() % 3;

	if (var == 0) {
		std::cout << "Create class A" << std::endl;
		return new A();
	}
	else if (var == 1) {
		std::cout << "Create class B" << std::endl;
		return new B();
	}
	else if (var == 2) {
		std::cout << "Create class C" << std::endl;
		return new C();
	}
	return NULL;
}

void identify(Base* p) {
	std::cout << "Identify class by pointer: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A class";
	else if (dynamic_cast<B*>(p))
		std::cout << "B class";
	else if (dynamic_cast<C*>(p))
		std::cout << "C class";
	std::cout << std::endl;
}

void identify(Base& p) {
	Base res;

	std::cout << "Identify class by reference: ";
	try {
		res = dynamic_cast<A&>(p);
		std::cout << "A class";
	}
	catch (const std::bad_cast &e) {}
	try {
		res = dynamic_cast<B&>(p);
		std::cout << "B class";
	}
	catch (const std::bad_cast &e) {}
	try {
		res = dynamic_cast<C&>(p);
		std::cout << "C class";
	}
	catch (const std::bad_cast &e) {}
	std::cout << std::endl;
}

int main() {
	Base *base = generate();
	identify(base);
	identify(*base);
	return 0;
}