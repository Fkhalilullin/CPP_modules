#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

class NoEasyFind: public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Value is not found";
			}
	};

template <typename T>
typename T::const_iterator easyfind(T &cont, int value) {
	typename T::const_iterator res;

	res = cont.begin();
	for (; res != cont.end(); res++)
		if (*res == value)
			return res;
	throw NoEasyFind();
}

#endif