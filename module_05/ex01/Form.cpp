#include "Form.hpp"

Form::Form() : _name("noName"), _gradeToSign(150), 
			_gradeToExecute(150), _isSigned(false) {}

Form::Form(const std::string name, const unsigned int gradeToSign, 
			const unsigned int gradeToExecute, const bool isSigned) :
	_name(name), 
	_gradeToSign(gradeToSign), 
	_gradeToExecute(gradeToExecute), 
	_isSigned(false) {
		if (this->_gradeToExecute > 150 || this->_gradeToSign > 150)
			throw Form::GradeTooLowException();
		if (this->_gradeToExecute < 1 || this->_gradeToSign < 1)
			throw Form::GradeTooHighException();
	}

Form::Form(const Form &src) :
	_name(src.getName()),
	_gradeToSign(src.getGradeToSign()),
	_gradeToExecute(src.getGradeToExecute()),
	_isSigned(false) {}

Form::~Form() {}

Form & Form::operator=(Form const &rhs) {
	this->_isSigned = rhs.getIsSigned();
	return (*this);
}


void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->getGradeToSign())
		this->_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::string	Form::getName() const {
	return (this->_name);
}

unsigned int Form::getGradeToSign() const {
	return (this->_gradeToSign);
}

unsigned int Form::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

bool Form::getIsSigned() const {
	return (this->_isSigned);
}

const char	*Form::GradeTooLowException::what() const throw()
{ 
	return ("Grade for form too low");
}

const char	*Form::GradeTooHighException::what() const throw()
{ 
	return ("Grade for form too high");
}

std::ostream	&operator<<(std::ostream &out, const Form &obj)
{
	if (obj.getIsSigned())
		out << obj.getName() << " form is signed. ";
	else
		out << obj.getName() << " form is not signed. ";
	out << "Required grade to be signed is " << obj.getGradeToSign() << std::endl;
	return (out);
}
