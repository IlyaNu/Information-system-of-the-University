#pragma once
#include <fstream>
#include "StructsCommon.h"

struct stud
{
	const std::string structName = "stud";
	const unsigned int QuantityOfElems = 4;
	snp stud;
	snp father;
	snp mother;
	std::string agestud;
	std::string genderstud;
	address address;
	unsigned int id_grup;
	std::string info;

	void title();
	void request();
	void show();
	bool read(std::ifstream* ifs);
	bool write(std::ofstream* ofs);
};