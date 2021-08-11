#include "Convert.hpp"

int main(int ac, char **argv) {
	if (ac != 2) {
		std::cout << "Error arguments" << std::endl;
		return (0);
	}
	else {
		Convert convert(argv[1]);
		convert.convertAll();
	}
	return (0);
}