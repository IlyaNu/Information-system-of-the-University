#include <iostream>
#include <clocale>
#include "StructGrup.h"

void grup::title()
{
	std::cout << std::left << std::setw(5) << "ID ������";
	std::cout << std::left << std::setw(15) << "ID ����������-��������";
	std::cout << std::left << std::setw(25) << "ID ����������� ����������";
	std::cout << std::left << std::setw(15) << "���-�� ���������";
	std::cout << std::left << std::setw(15) << "��� ��������";
	std::cout << std::left << std::setw(10) << "��� ������ ��������";
}

void grup::request()
{
	std::cout << "������� ID ������ \n";
	std::cin >> id_grup;
	std::cout << "������� ID ����������-�������� \n";
	std::cin >> id_curator;
	std::cout << "������� ����������� ����������\n";
	std::cin >> id_napravleniya;
	std::cout << "������� ���-�� ���������\n";
	std::cin >> students;
	std::cout << "��� �������� \n";
	std::cin >> kurs;
	std::cout << "��� ������ �������� \n";
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