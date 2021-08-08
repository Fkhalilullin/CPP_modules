#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
public:
	Form();
	Form(std::string name, unsigned int gradeToSign, 
		unsigned int gradeToExecute, bool isSigned);
	Form(const Form &src);
	~Form();

	Form & operator=(Form const &rhs);

	void			beSigned();
	void			signForm(Bureaucrat &bureaucrat);

	std::string		getName() const;
	unsigned int	getGradeToSign() const;
	unsigned int	getGradeToExecute() const;
	bool			getIsSigned() const;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

private:
	std::string const	_name;
	unsigned int const	_gradeToSign;
	unsigned int const	_gradeToExecute;
	bool				_isSigned;
};

std::ostream	&operator<<(std::ostream &out, const Form &obj);

#endif