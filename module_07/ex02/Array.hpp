#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
public:
	Array() {
		_len = 0;
		_arr = NULL; 
	}

	Array(unsigned int n) {
		_len = n;
		_arr = new T[_len];
		
	} 

	Array(const Array &src) {
		_len = src.getLen();
		_arr = new T[_len];
		for (unsigned int i = 0; i < _len; i++) {
			_arr[i] = src.getArr()[i];
		}
	}

	~Array() {
		if (_arr) 
			delete [] _arr;
	}

	Array & operator=(const Array &rhs) {
		if (_arr)
			delete[] _arr;
		_len = rhs.getLen();
		_arr = new T[_len];
		for (unsigned int i = 0; i < _len; i++) {
			_arr[i] = rhs.getArr()[i];
		}
		return *this;
	}

	T & operator[](unsigned int n) {
		if (static_cast<unsigned int>(n) >= _len || n < 0)
			throw OutOfRange();
		return (_arr[n]);
	}

	class OutOfRange: public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Out of range";
			}
	};

	unsigned int size() {
		return (_len);
	}

	unsigned int getLen() const {return this->_len;}
	T			*getArr() const {return this->_arr;}

private:
	T				*_arr;
	unsigned int	_len;

};

#endif