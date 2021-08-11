#include <iostream>

struct Data {};

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data		data;
	Data		*data_ptr;
	uintptr_t	uiptr;

	uiptr = serialize(&data);
	std::cout << "Original data ptr: " << &data << std::endl << "Uintptr: " << uiptr << std::endl;

	data_ptr = deserialize(uiptr);
	std::cout << "New data ptr: " << data_ptr << std::endl;
}