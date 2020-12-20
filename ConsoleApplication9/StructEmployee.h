#pragma once
#include <fstream>
#include "StructsCommon.h"
struct employee
{
	const std::string structName = "employee";
	const unsigned int QuantityOfElems = 14;
	unsigned int id;
	snp snp;
	unsigned int age;
	std::string gender;
	address address;
	unsigned long long int telephone;
	passport passport;
	unsigned int id_position;
	
	void title();
	void request();
	void show();
	bool read(std::ifstream* ifs);
	bool write(std::ofstream* ofs);
};