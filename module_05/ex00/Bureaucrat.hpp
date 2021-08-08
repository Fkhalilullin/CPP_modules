#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string const name, unsigned int grade);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat const &rhs);

	void gradeToHight();
	void gradeToLow();

	std::string		getName() const;
	unsigned int	getGrade() const;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Grade too hight";
			}	
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Grade too low";
			}
	};

private:
	std::string 	_name;
	unsigned int	_grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj);

#endif