#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include <iostream>

class Intern
{
public:
	Intern();
	~Intern();
	Form	*makeForm(const std::string &type, const std::string &name);
	class WrongTypeFormException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif