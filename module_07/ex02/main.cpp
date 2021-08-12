#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int>	sev(5);

	srand(time(NULL));
	for (unsigned int i = 0; i < sev.size(); ++i)
	{
		sev[i] = rand() % 100;
	}

	Array<int>	copy(sev);
	Array<int>	zero;

	std::cout << "Sev array: " << std::endl;

	for (unsigned int i = 0; i < sev.size(); ++i)
	{
		std::cout << sev[i] << '\n';
	}

	std::cout << "--------------------------\n";
	std::cout << "Copy array: " << std::endl;

	for (unsigned int i = 0; i < copy.size(); ++i)
	{
		std::cout << sev[i] << " -> " << copy[i] << '\n';
	}

	std::cout << "try zero[1]: " << std::endl;

	try
	{
		zero[1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<"-------------------\n";
	zero = copy;
	for (unsigned int i = 0; i < zero.size(); ++i)
	{
		std::cout << zero[i] << '\n';
	}
	return (0);
}