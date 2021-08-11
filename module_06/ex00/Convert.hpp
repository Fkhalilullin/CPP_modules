#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert {
public:
	Convert();
	Convert(std::string const &value);
	Convert(const Convert &src);
	~Convert();
	
	Convert & operator=(Convert const &rhs);

	void convertToInt();
	void convertToChar();
	void convertToDouble();
	void convertToFloat();
	void convertAll();

	double	getValue() const;
	int		getLenght() const;
	bool	getIsNan() const;
	bool	getIsPlusInf() const;
	bool	getIsMinusInf() const;
	bool	getIsZero() const;

private:
	double	_value;
	int		_lenght;
	bool	_isNan;
	bool	_isPlusInf;
	bool	_isMinusInf;
	bool	_isZero;
};


#endif