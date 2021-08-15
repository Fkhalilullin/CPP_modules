#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <memory>
#include <vector>
#include <cmath>

class Span {
public:
	Span();
	Span(unsigned int N);
	Span(const Span &src);
	
	~Span();

	Span & operator=(const Span &rhs);

	void addNumber(int value);

	template <typename InputIterator>
	void addNumber(InputIterator begin, InputIterator end) {
		if (this->_iter == this->_len)
			throw Span::NoAddNumberError();
		int i = 0;
		for (std::vector<int>::iterator it = begin ; it != end; ++it) {
			this->_arr[i++] = *it;
			this->_iter++;
		}	
	}

	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	unsigned int getN() const;
	unsigned int getLen() const;
	unsigned int getIter() const;
	std::vector<int> getArr() const;

	class NoAddNumberError: public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Array is full";
			}
	};

private:
	unsigned int		_N;
	unsigned int		_len;
	unsigned int		_iter;
	std::vector<int>	_arr;
};

#endif