#include <iostream>
#include "span.hpp"

int main() {
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	for (unsigned int i = 0; i < sp.getLen(); i++)
		std::cout << sp.getArr()[i] << " ";
	std::cout << std::endl;

	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

	try {
		sp.addNumber(100);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	srand(time(NULL));
	Span megaSpan = Span(10000);
	std::vector<int> tmp;
	for (int i = 0; i < 10000; i++) {
		tmp.push_back((rand() % 10));
	}

	try
	{
		megaSpan.addNumber(tmp.begin(), tmp.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Span with iterator: " << std::endl;
	for (unsigned int i = 0; i < 20; i++) {
		std::cout << megaSpan.getArr()[i] << " ";
	}
	
	return 0;
}