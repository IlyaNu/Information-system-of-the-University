#include <iostream>
#include <clocale>
#include "StructsCommon.h"

void snp::title()
{
	std::cout << std::left
		<< std::setw(15) << "Фамилия"
		<< std::setw(15) << "Имя"
		<< std::setw(15) << "Отчество";
}

void snp::request()
{
	std::cout << "Введите фамилию\n";
	std::cin >> surname;
	std::cout << "Введите имя\n";
	std::cin >> name;
	std::cout << "Введите отчество\n";
	std::cin >> patronymic;
}

void snp::show()
{
	std::cout << std::left
		<< std::setw(15) << surname
		<< std::setw(15) << name
		<< std::setw(15) << patronymic;
}

bool snp::read(std::ifstream* ifs)
{
	if (!ifs) return false;
	if (ifs->peek() == EOF) return false;

	*ifs
		>> surname
		>> name
		>> patronymic;

	if (ifs->good()) return true;
	return false;
}

bool snp::write(std::ofstream* ofs)
{
	if (!ofs) return false;

	*ofs << std::left
		<< std::setw(15) << surname
		<< std::setw(15) << name
		<< std::setw(15) << patronymic;

	if (ofs->good()) return true;
	return false;
}

void passport::title()
{
	std::cout << std::left
		<< std::setw(10) << "Серия"
		<< std::setw(10) << "Номер";
}

void passport::request()
{
	std::cout << "Введите серию\n";
	std::cin >> serie;
	std::cout << "Введите номер\n";
	std::cin >> number;
}

void passport::show()
{
	std::cout << std::left
		<< std::setw(10) << serie
		<< std::setw(10) << number;
}

bool passport::read(std::ifstream* ifs)
{
	if (!ifs) return false;
	if (ifs->peek() == EOF) return false;

	*ifs
		>> serie
		>> number;

	if (ifs->good()) return true;
	return false;
}

bool passport::write(std::ofstream* ofs)
{
	if (!ofs) return false;

	*ofs << std::left
		<< std::setw(10) << serie
		<< std::setw(10) << number;

	if (ofs->good()) return true;
	return false;
}

void address::title()
{
	std::cout << std::left
		<< std::setw(15) << "Город"
		<< std::setw(15) << "Улица"
		<< std::setw(5) << "Дом"
		<< std::setw(10) << "Квартира";
}

void address::request()
{
	std::cout << "Введите город\n";
	std::cin >> city;
	std::cout << "Введите улицу\n";
	std::cin >> street;
	std::cout << "Введите номер дома\n";
	std::cin >> house;
	std::cout << "Введите номер квартиры\n";
	std::cin >> apartment;
}

void address::show()
{
	std::cout << std::left
		<< std::setw(15) << city
		<< std::setw(15) << street
		<< std::setw(5) << house
		<< std::setw(10) << apartment;
}

bool address::read(std::ifstream* ifs)
{
	if (!ifs) return false;
	if (ifs->peek() == EOF) return false;

	*ifs
		>> city
		>> street
		>> house
		>> apartment;

	if (ifs->good()) return true;
	return false;
}

bool address::write(std::ofstream* ofs)
{
	if (!ofs) return false;

	*ofs << std::left
		<< std::setw(15) << city
		<< std::setw(15) << street
		<< std::setw(5) << house
		<< std::setw(5) << apartment;

	if (ofs->good()) return true;
	return false;
}