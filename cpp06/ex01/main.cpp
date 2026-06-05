#include "Serializer.hpp"

int main( void )
{
	Data* myData = new Data;
	myData->str = "Hello World!";
	myData->n = 42;
	myData->b = true;
	myData->d = 3.14;

	uintptr_t raw = Serializer::serialize(myData);
	Data* data_afterserialize_and_deserialize = Serializer::deserialize(raw);

	std::cout << std::endl;
	std::cout << "Data before serialization" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "myData->str = " << myData->str << std::endl;
	std::cout << "myData->n = " << myData->n << std::endl;
	std::cout << "myData->b = " << myData->b << std::endl;
	std::cout << "myData->d = " << myData->d << std::endl;

	std::cout << "raw = " << raw << std::endl;


	std::cout << std::endl;
	std::cout << "Data after serialization" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "data_afterserialize_and_deserialize->str = " << data_afterserialize_and_deserialize->str << std::endl;
	std::cout << "data_afterserialize_and_deserialize->n = " << data_afterserialize_and_deserialize->n << std::endl;
	std::cout << "data_afterserialize_and_deserialize->b = " << data_afterserialize_and_deserialize->b << std::endl;
	std::cout << "data_afterserialize_and_deserialize->d = " << data_afterserialize_and_deserialize->d << std::endl;

	delete myData; //avoid leaks
	std::cout << std::endl;
    
	return (0);
}