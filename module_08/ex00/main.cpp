#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main() {
	std::vector<int> v;

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		v.push_back(rand() % 10);

	for (int i = 0; i < 10; i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	try {
		if (easyfind(v, 0) != v.end())
			std::cout << "This element is in container\n";
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}