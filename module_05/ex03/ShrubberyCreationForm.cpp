#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	Form(target, 145, 137, false) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : 
	Form(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	this->Form::operator=(rhs);
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::ExecuteTooHighException();
	if (!this->getIsSigned())
		throw Form::FormIsNotSingException();
	std::ofstream file(this->getName() + "_shrubbery");

	file << "          _-_          " << std::endl
		 << "       /~~   ~~\\      " << std::endl
		 << "    /~~         ~~\\   " << std::endl
		 << "   {               }   " << std::endl
 		 << "    \\  _-     -_  /   " << std::endl
		 << "      ~  \\  /  ~      " << std::endl
		 << "   _- -   | | _- _     " << std::endl
		 << "     _ -  | |   -_     " << std::endl
		 << "         // \\         " << std::endl;
}
