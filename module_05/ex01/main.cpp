#include "Bureaucrat.hpp"
#include "Form.hpp"

void testForm() {
	Form form_1("Form_1", 150, 150, false);
	Form form_2("Form_2",1, 1, false);

	Bureaucrat Bob("Bob", 150);
	Bureaucrat Jey("Jey", 1);
	Bureaucrat Buba("Buba", 50);

	std::cout << "Test" << std::endl;

	std::cout << form_1;
	std::cout << form_2;

	Bob.signForm(form_1);

	std::cout << form_1;
	std::cout << form_2;

	Bob.signForm(form_2);
	Jey.signForm(form_2);

	std::cout << form_2;
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
