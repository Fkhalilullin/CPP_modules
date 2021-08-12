#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
T const & max(T const &lv, T const &rv) {
	return (lv >= rv ? lv : rv);
}

template <typename T>
T const & min(T const &lv, T const &rl) {
	return (lv <= rl ? lv : rl);
}

template <typename T>
void	swap(T &lv, T &rv) {
	T tmp;

	tmp = lv;
	lv = rv;
	rv = tmp;
}

#endif