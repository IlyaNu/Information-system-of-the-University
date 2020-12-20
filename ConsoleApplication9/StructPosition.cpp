#include <iostream>
#include <clocale>
#include <iostream>
#include <iomanip>
#include "StructPosition.h"

void position::title()
{
	std::cout << std::left << std::setw(5) << "ID";
	std::cout << std::left << std::setw(10) << "Название";
	std::cout << std::left << std::setw(10) << "Оклад";
	std::cout << std::left << std::setw(30) << "Обязанности";
	std::cout << std::left << std::setw(30) << "Требования";
}

void position::request()
{
	std::cout << "Введите название\n";
	std::cin >> name;
	std::cout << "Оклад\n";
	std::cin >> salary;
	std::cout << "Введите обязанности\n";
	std::cin >> duties;
	std::cout << "Введите требования\n";
	std::cin >> demands;
}

void position::show()
{
	std::cout << std::left << std::setw(5) << id;
	std::cout << std::left << std::setw(10) << name;
	std::cout << std::left << std::setw(10) << salary;
	std::cout << std::left << std::setw(30) << duties;
	std::cout << std::left << std::setw(30) << demands;
}

bool position::read(std::ifstream* ifs)
{
	if (!ifs) return false;
	if (ifs->peek() == EOF) return false;

	*ifs >> id;
	*ifs >> name;
	*ifs >> salary;
	*ifs >> duties;
	*ifs >> demands;

	if (ifs->good())
		return true;
	return false;
}

bool position::write(std::ofstream* ofs)
{
	if (!ofs) return false;

	*ofs << std::left << std::setw(5) << id;
	*ofs << std::left << std::setw(10) << name;
	*ofs << std::left << std::setw(10) << salary;
	*ofs << std::left << std::setw(30) << duties;
	*ofs << std::left << std::setw(30) << demands;

	if (ofs->good()) return true;
	return false;
}