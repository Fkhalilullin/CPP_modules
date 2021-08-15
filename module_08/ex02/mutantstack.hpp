#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<class T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack	&operator=(const MutantStack &right)
	{
		this->c.operator=(right);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin() {return this->c.begin();}
	iterator	end() {return this->c.end();}

	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin() {return this->c.rbegin();}
	reverse_iterator rend() {return this->c.rend();}
};

#endif