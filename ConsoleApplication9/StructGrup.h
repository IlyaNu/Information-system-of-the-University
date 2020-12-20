#pragma once
#include <fstream>
#include "StructsCommon.h"
struct grup
{
	const std::string structName = "grup";
	const unsigned int QuantityOfElems = 14;
	unsigned int id_grup;
	unsigned int id_curator;
	std::string id_napravleniya;
	unsigned int students;
	unsigned int kurs;
	unsigned int year;

	void title();
	void request();
	void show();
	bool read(std::ifstream* ifs);
	bool write(std::ofstream* ofs);
};