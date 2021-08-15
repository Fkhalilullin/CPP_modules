#include "span.hpp"

Span::Span() :_N(0) {}

Span::Span(unsigned int N): _arr(N) {
	this->_N = N;
	this->_len = N;
	this->_iter = 0;
}

Span::Span(const Span &src) {
	this->_N = src.getN();
	this->_len = src.getIter();
	this->_iter = src.getIter();
	for (unsigned long i=0; i<src.getArr().size(); i++)
        src.getArr().push_back(this->_arr[i]);
}

Span::~Span() {}

Span & Span::operator=(const Span &rhs) {
	this->_N = rhs.getN();
	this->_len = rhs.getIter();
	this->_iter = rhs.getIter();
	for (unsigned long i=0; i<this->_arr.size(); i++)
		rhs.getArr().push_back(this->_arr[i]);	
	return *this;
}

void	Span::addNumber(int value) {
	if (this->_iter == this->_len) {
		throw Span::NoAddNumberError();
	}
	this->_arr[this->_iter] = value;
	this->_iter++;
}

unsigned int Span::getN() const {
	return this->_N;
}

unsigned int Span::getLen() const {
	return this->_len;
}

unsigned int Span::getIter() const {
	return this->_iter;
}

std::vector<int> Span::getArr() const {
	return this->_arr;
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int	res;
	unsigned int	tmp;

	if (_len <= 1)
		throw NoAddNumberError();
	res = std::abs(_arr[0] - _arr[1]);
	for (unsigned int i = 0; i < _len - 1; ++i)
		for (unsigned int j = i + 1; j < _len; ++j)
		{
			tmp = std::abs(_arr[i] - _arr[j]);
			if (tmp < res)
				res = tmp;
		}
	return (res);
}

unsigned int	Span::longestSpan(void) const
{
	unsigned int	res;
	unsigned int	tmp;

	if (_len <= 1)
		throw NoAddNumberError();
	res = std::abs(_arr[0] - _arr[1]);
	for (unsigned int i = 0; i < _len - 1; ++i)
		for (unsigned int j = i + 1; j < _len; ++j)
		{
			tmp = std::abs(_arr[i] - _arr[j]);
			if (tmp > res)
				res = tmp;
		}
	return (res);
}