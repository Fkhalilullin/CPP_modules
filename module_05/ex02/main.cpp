#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

void testForm() {
	ShrubberyCreationForm house("house");
	RobotomyRequestForm robot("robot");
	PresidentialPardonForm trump("Trump");
	Bureaucrat Bob("Bob", 1);
	Bureaucrat Egor("Egor",150);

	std::cout << "Test: " << std::endl;

	try
	{
		Bob.executeForm(house);
		Bob.executeForm(robot);
		Bob.executeForm(trump);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Egor.executeForm(house);
		Egor.executeForm(robot);
		Egor.executeForm(trump);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bob.signForm(house);
	Bob.signForm(robot);
	Bob.signForm(trump);

	Bob.executeForm(house);
	Bob.executeForm(robot);
	Bob.executeForm(trump);

	std::cout << house;
	std::cout << robot;
	std::cout << trump;

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
