#include "whatever.hpp"

class Awesome {
public:
	Awesome( int n = 0) : _n( n ) {}

	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

	int getValue() const { return (this->_n); }
private:
	int _n;
};

std::ostream	&operator<<(std::ostream &out, const Awesome &obj)
{
	out << obj.getValue();
	return (out);
}



void otherTest() {
	Awesome a(2);
	Awesome b(3);

	std::cout << "Test with Awesome: " << std::endl;
	
	std::cout << "a = " << a << ", b = " << b << std::endl;

	::swap( a, b );

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
	otherTest();
	return 0;
}