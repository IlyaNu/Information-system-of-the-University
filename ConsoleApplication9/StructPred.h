#pragma once
#include <fstream>
#include "StructsCommon.h"
struct pred
{
	const std::string structName = "pred";
	const unsigned int QuantityOfElems = 14;
	unsigned int id_pred;
	std::string pred;
	std::string opisanie;
	unsigned int id_pred_sotr;

	void title();
	void request();
	void show();
	bool read(std::ifstream* ifs);
	bool write(std::ofstream* ofs);
};