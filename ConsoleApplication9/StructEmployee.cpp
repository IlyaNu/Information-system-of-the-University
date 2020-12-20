#include <iostream>
#include <clocale>
#include "StructEmployee.h"

void employee::title()
{
	std::cout << std::left << std::setw(5) << "ID";
	snp.title();
	std::cout << std::left << std::setw(10) << "Возраст";
	std::cout << std::left << std::setw(5) << "Пол";
	address.title();
	std::cout << std::left << std::setw(15) << "Телефон";
	passport.title();
	std::cout << std::left << std::setw(15) << "ID должности";
}

void employee::request()
{
	snp.request();
	std::cout << "Введите возраст\n";
	std::cin >> age;
	std::cout << "Введите пол ( М/Ж )\n";
	std::cin >> gender;
	address.request();
	std::cout << "Введите номер телефона\n";
	std::cin >> telephone;
	passport.request();
	std::cout << "Введите код должности\n";
	std::cin >> id_position;
}

void employee::show()
{
	std::cout << std::left << std::setw(5) << id;
	snp.show();
	std::cout << std::left << std::setw(10) << age;
	std::cout << std::left << std::setw(5) << gender;
	address.show();
	std::cout << std::left << std::setw(15) << telephone;
	passport.show();
	std::cout << std::left << std::setw(15) << id_position;
}

bool employee::read(std::ifstream* ifs)
{
	if (!ifs) return false;
	if (ifs->peek() == EOF) return false;

	*ifs >> id;
	snp.read(ifs);
	*ifs >> age;
	*ifs >> gender;
	address.read(ifs);
	*ifs >> telephone;
	passport.read(ifs);
	*ifs >> id_position;

	if (ifs->good())
		return true;
	return false;
}

bool employee::write(std::ofstream* ofs)
{
	if (!ofs) return false;

	*ofs << std::left << std::setw(5) << id;
	snp.write(ofs);
	*ofs << std::left << std::setw(10) << age;
	*ofs << std::left << std::setw(5) << gender;
	address.write(ofs);
	*ofs << std::left << std::setw(15) << telephone;
	passport.write(ofs);
	*ofs << std::left << std::setw(15) << id_position;
	if (ofs->good()) return true;
	return false;
}