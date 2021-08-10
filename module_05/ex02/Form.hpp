#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form();
	Form(std::string name, unsigned int gradeToSign, 
		unsigned int gradeToExecute, bool isSigned);
	Form(const Form &src);
	~Form();

	Form & operator=(Form const &rhs);

	void			beSigned(Bureaucrat &bureaucrat);

	std::string		getName() const;
	unsigned int	getGradeToSign() const;
	unsigned int	getGradeToExecute() const;
	bool			getIsSigned() const;

	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class ExecuteTooHighException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class FormIsNotSingException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

private:
	const std::string	_name;
	const unsigned int	_gradeToSign;
	const unsigned int	_gradeToExecute;
	bool				_isSigned;
};

std::ostream	&operator<<(std::ostream &out, const Form &obj);

#endif