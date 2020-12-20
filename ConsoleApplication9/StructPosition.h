#pragma once
#include <fstream>

struct position
{
	const std::string structName = "position";
	const unsigned int QuantityOfElems = 4;
	unsigned int id;
	std::string name;
	unsigned int salary;
	std::string duties;
	std::string demands;

	void title();
	void request();
	void show();
	bool read(std::ifstream* ifs);
	bool write(std::ofstream* ofs);
};