#pragma once
#include <fstream>
#include "StructsCommon.h"
struct raspisanie
{
	const std::string structName = "raspisanie";
	const unsigned int QuantityOfElems = 14;
	std::string data;
	std::string dennedeli;
	unsigned int id_grup;
	unsigned int id_pred;
	std::string begin;
	std::string end;


	void title();
	void request();
	void show();
	bool read(std::ifstream* ifs);
	bool write(std::ofstream* ofs);
};