#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string const name, unsigned int grade);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat const &rhs);

	void gradeToHight();
	void gradeToLow();

	void signForm(Form &form);

	std::string		getName() const;
	unsigned int	getGrade() const;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

private:
	std::string 	_name;
	unsigned int	_grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj);

#endif