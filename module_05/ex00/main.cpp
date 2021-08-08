#include "Bureaucrat.hpp"

int main() {
	Bureaucrat Bob("Bob", 150);
	Bureaucrat Jey("Jey", 1);
	Bureaucrat Buba("Buba", 50);

	try
	{
		Bob.gradeToLow();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
	try
	{
		Jey.gradeToHight();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Buba.gradeToLow();
		Buba.gradeToLow();
		Buba.gradeToHight();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << Bob;
	std::cout << Jey;
	std::cout << Buba;
}
