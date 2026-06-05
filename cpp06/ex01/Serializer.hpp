
#pragma once
#include <iostream>
#include <string>
#include <stdint.h>

typedef struct Data
{
	std::string str;
	int n;
	bool b;
	double d;
} Data;

class Serializer
{
	private:
		Serializer(); // Private constructor -- the class is not meant to be instanciated
		Serializer(const Serializer &copy);
		~Serializer();
		Serializer &operator=(const Serializer &copy);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};