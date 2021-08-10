#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	Form() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	Form(target, 72, 45, false) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
	Form(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->Form::operator=(rhs);
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::ExecuteTooHighException();
	if (!this->getIsSigned())
		throw Form::FormIsNotSingException();
	std::cout << "some drilling noises\n";
	if (rand() % 2)
		std::cout << this->getName() << " has been robotomized successfully\n";
	else
		std::cout << "It's a failure\n";
}