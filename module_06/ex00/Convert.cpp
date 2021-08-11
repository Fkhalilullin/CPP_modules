#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string const &value) {
	if (value.length() == 1 && isprint(*(value.c_str())) && !(isdigit(*(value.c_str()))))
        this->_value = static_cast<double>(*(value.c_str()));
    else
        this->_value = atof(value.c_str());

	this->_lenght = value.length();	

	if (value == "nan" || value == "nanf")
		this->_isNan = true;
	else
		this->_isNan = false;

	if (value == "+inf" || value == "+inff")
		this->_isPlusInf = true;
	else
		this->_isPlusInf = false;

	if (value == "-inf" || value == "-inff")
		this->_isMinusInf = true;
	else
		this->_isMinusInf = false;
	
	if (this->_value - static_cast<int>(this->_value) == 0.0000)
		this->_isZero = true;
	else
		this->_isZero = false;
	
}

Convert::Convert(const Convert &src) {
	*this = src;
}

Convert::~Convert() {}

Convert & Convert::operator=(Convert const &rhs) {
	this->_value = rhs.getValue();
	this->_lenght = rhs.getLenght();
	this->_isNan = rhs.getIsNan();
	this->_isPlusInf = rhs.getIsPlusInf();
	this->_isMinusInf = rhs.getIsMinusInf();
	this->_isZero = rhs.getIsZero();
	return *this; 
}

void Convert::convertToInt() {
	std::cout << "int: ";
	if (this->_value > INT_MAX || this->_value < INT_MIN
	|| this->_isMinusInf || this->_isNan || this->_isPlusInf)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(this->_value)  << std::endl;
}

void Convert::convertToChar() {

	char	c = static_cast<char>(this->_value);

	std::cout << "char: ";
	if (this->_value < 0 || this->_value > 255
		|| this->_isPlusInf || this->_isMinusInf || this->_isNan)
		std::cout << "impossible\n";
	else if (isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable\n";
}

void	Convert::convertToFloat() {
	std::cout << "float: ";
	if (this->_isNan)
		std::cout << "nan";
	else if (this->_isMinusInf)
		std::cout << "-inf";
	else if (this->_isPlusInf)
		std::cout << "+inf";
	else
		std::cout << static_cast<float>(this->_value);
	if (this->_isZero)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	Convert::convertToDouble()
{
	std::cout << "double: ";
	if (this->_isNan)
		std::cout << "nan";
	else if (this->_isMinusInf)
		std::cout << "-inf";
	else if (this->_isPlusInf)
		std::cout << "+inf";
	else
		std::cout << static_cast<double>(this->_value);
	if (this->_isZero)
		std::cout << ".0";
	std::cout << std::endl;
}

void Convert::convertAll() {
	convertToChar();
	convertToInt();
	convertToFloat();
	convertToDouble();
}

double Convert::getValue() const {
	return this->_value;
}

int Convert::getLenght() const {
	return this->_lenght;
}

bool Convert::getIsNan() const {
	return this->_isNan;
}

bool Convert::getIsPlusInf() const {
	return this->_isPlusInf;
}

bool Convert::getIsMinusInf() const {
	return this->_isMinusInf;
}

bool Convert::getIsZero() const {
	return this->_isZero;
}