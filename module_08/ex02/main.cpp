#include "mutantstack.hpp"
#include <iostream>
#include <list>

void mutantStackTest()
{
	std::cout << "Mutant stack: " << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " <<mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}

	std::cout << std::endl << "Reverse: " << std::endl;
	MutantStack<int> s;
	s.push(5);
	s.push(17);
	std::cout << "Top: " << s.top() << std::endl;
	s.pop();
	std::cout << "Size: " <<s.size() << std::endl;
	s.push(3);
	s.push(5);
	s.push(737);
	s.push(0);
	MutantStack<int>::reverse_iterator rit = s.rbegin();
	MutantStack<int>::reverse_iterator rite = s.rend();
	--rit;
	--rite;
	while (rit != rite)
	{
		std::cout << *rite << " ";
		--rite;
	}
}

int main()
{
	std::cout << "List: " << std::endl;
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << "Back: " << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << "Size: " <<mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << " ";
	++it;
	}
	std::cout << std::endl <<std::endl;
	mutantStackTest();
	return (0);
}