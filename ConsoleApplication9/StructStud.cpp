#include <iostream>
#include <clocale>
#include <iostream>
#include <iomanip>
#include "StructStud.h"

void stud::title()
{
	stud.title();
	std::cout << std::left << std::setw(10) << "���� ��������";
	std::cout << std::left << std::setw(10) << "���";
	address.title();
	father.title();
	mother.title();
	std::cout << std::left << std::setw(30) << "��� ������";
	std::cout << std::left << std::setw(30) << "���. ����������";
}

void stud::request()
{
	stud.request();
	std::cout << "������� ���� ��������\n";
	std::cin >> agestud;
	std::cout << "������� ��� (�/�)\n";
	std::cin >> genderstud;
	address.request();
	father.request();
	mother.request();
	std::cout << "������� ��� ������\n";
	std::cin >> id_grup;
	std::cout << "���. ����������\n";
	std::cin >> info;
}

void stud::show()
{
	stud.show();
	std::cout << std::left << std::setw(10) << agestud;
	std::cout << std::left << std::setw(10) << genderstud;
	address.show();
	father.show();
	mother.show();
	std::cout << std::left << std::setw(30) << id_grup;
	std::cout << std::left << std::setw(30) << info;
}

bool stud::read(std::ifstream* ifs)
{
	if (!ifs) return false;
	if (ifs->peek() == EOF) return false;
	stud.read(ifs);
	*ifs >> agestud;
	*ifs >> genderstud;
	address.read(ifs);
	father.read(ifs);
	mother.read(ifs);
	*ifs >> id_grup;
	*ifs >> info;

	if (ifs->good())
		return true;
	return false;
}

bool stud::write(std::ofstream* ofs)
{
	if (!ofs) return false;

	stud.write(ofs);
	*ofs << std::left << std::setw(10) << agestud;
	*ofs << std::left << std::setw(10) << genderstud;
	address.write(ofs);
	father.write(ofs);
	mother.write(ofs);
	*ofs << std::left << std::setw(30) << id_grup;
	*ofs << std::left << std::setw(30) << info;

	if (ofs->good()) return true;
	return false;
}