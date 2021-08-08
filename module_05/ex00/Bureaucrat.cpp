#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	this->_name = "noName";
	this->_grade = 150;
}


Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) {
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->_grade = rhs.getGrade();
	this->_name = rhs.getName();
	
	return *this;
}

void Bureaucrat::gradeToHight() {
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::gradeToLow() {
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}


std::string Bureaucrat::getName() const {
	return this->_name;
}

unsigned int Bureaucrat::getGrade() const {
	return this->_grade;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}