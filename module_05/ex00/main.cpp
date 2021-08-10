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
		std::cerr << e.what() << std::endl;
	}
		
	try
	{
		Jey.gradeToHight();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Buba.gradeToLow();
		Buba.gradeToLow();
		Buba.gradeToHight();
		Buba.gradeToHight();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << Bob;
	std::cout << Jey;
	std::cout << Buba;

	try
	{
		Bureaucrat K("Key",151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
