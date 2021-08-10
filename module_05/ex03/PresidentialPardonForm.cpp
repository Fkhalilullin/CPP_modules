#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() :
	Form() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form(target, 25, 5, false) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
	Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->Form::operator=(rhs);
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::ExecuteTooHighException();
	if (!this->getIsSigned())
		throw Form::FormIsNotSingException();
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox\n";
}