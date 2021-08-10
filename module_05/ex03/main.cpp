#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"

void testForm() {
	Intern someRandomIntern;
	Bureaucrat Bob("Bob", 1);
	Bureaucrat Egor("Egor",150);

	Form* rrf;
	
	std::cout << "Test: " << std::endl;
	try 
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bob.executeForm(*rrf);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Egor.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bob.signForm(*rrf);


	Bob.executeForm(*rrf);

	std::cout << *rrf;


	Form *rrf_2 = 0;

	try 
	{
		rrf_2 = someRandomIntern.makeForm("buba request", "Buba");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	delete rrf;
	delete rrf_2;
}


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

	testForm();

	return (0);
}
