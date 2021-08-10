#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Form *form_1(const std::string &name)
{
	return (new ShrubberyCreationForm(name));
}

Form *form_2(const std::string &name)
{
	return (new RobotomyRequestForm(name));
}

Form *form_3(const std::string &name)
{
	return (new PresidentialPardonForm(name));
}

Form	*Intern::makeForm(const std::string &type, const std::string &name)
{
	std::string types[3] = {"shrubbery request", "robotomy request", "presidential pardon"};
	Form *(*f[3])(const std::string &) = {form_1, form_2, form_3};
	for (int i = 0; i < 3; ++i)
	{
		if (types[i] == type)
		{
			std::cout << "Intern creates " << type << " form\n";
			return (f[i](name));
		}
	}
	throw WrongTypeFormException();
}

const char	*Intern::WrongTypeFormException::what() const throw()
{
	return ("Wrong type of form");
}