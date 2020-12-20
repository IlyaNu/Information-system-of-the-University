#include <iostream>
#include <clocale>
#include "StructGrup.h"

void grup::title()
{
	std::cout << std::left << std::setw(5) << "ID группы";
	std::cout << std::left << std::setw(15) << "ID сотрудника-куратора";
	std::cout << std::left << std::setw(25) << "ID напровления подготовки";
	std::cout << std::left << std::setw(15) << "Кол-во студентов";
	std::cout << std::left << std::setw(15) << "Год обучения";
	std::cout << std::left << std::setw(10) << "Год начала обучения";
}

void grup::request()
{
	std::cout << "Введите ID группы \n";
	std::cin >> id_grup;
	std::cout << "Введите ID сотрудника-куратора \n";
	std::cin >> id_curator;
	std::cout << "Введите напровление подготовки\n";
	std::cin >> id_napravleniya;
	std::cout << "Введите кол-во студентов\n";
	std::cin >> students;
	std::cout << "Год обучения \n";
	std::cin >> kurs;
	std::cout << "Год начала обучения \n";
	std::cin >> year;
}

void grup::show()
{
	std::cout << std::left << std::setw(5) << id_grup; 
	std::cout << std::left << std::setw(15) << id_curator;
	std::cout << std::left << std::setw(25) << id_napravleniya;
	std::cout << std::left << std::setw(15) << students;
	std::cout << std::left << std::setw(15) << kurs;
	std::cout << std::left << std::setw(10) << year;
}

bool grup::read(std::ifstream* ifs)
{
	if (!ifs) return false;
	if (ifs->peek() == EOF) return false;

	*ifs >> id_grup;
	*ifs >> id_curator;
	*ifs >> id_napravleniya;
	*ifs >> students;
	*ifs >> kurs;
	*ifs >> year;

	if (ifs->good())
		return true;
	return false;
}

bool grup::write(std::ofstream* ofs)
{
	if (!ofs) return false;

	*ofs << std::left << std::setw(5) << id_grup;
	*ofs << std::left << std::setw(15) << id_curator;
	*ofs << std::left << std::setw(25) << id_napravleniya;
	*ofs << std::left << std::setw(15) << students;
	*ofs << std::left << std::setw(15) << kurs;
	*ofs << std::left << std::setw(10) << year;
	if (ofs->good()) return true;
	return false;
}