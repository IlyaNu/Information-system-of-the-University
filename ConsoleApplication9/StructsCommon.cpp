#include <iostream>
#include <clocale>
#include "StructsCommon.h"

void snp::title()
{
	std::cout << std::left
		<< std::setw(15) << "�������"
		<< std::setw(15) << "���"
		<< std::setw(15) << "��������";
}

void snp::request()
{
	std::cout << "������� �������\n";
	std::cin >> surname;
	std::cout << "������� ���\n";
	std::cin >> name;
	std::cout << "������� ��������\n";
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
		<< std::setw(10) << "�����"
		<< std::setw(10) << "�����";
}

void passport::request()
{
	std::cout << "������� �����\n";
	std::cin >> serie;
	std::cout << "������� �����\n";
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
		<< std::setw(15) << "�����"
		<< std::setw(15) << "�����"
		<< std::setw(5) << "���"
		<< std::setw(10) << "��������";
}

void address::request()
{
	std::cout << "������� �����\n";
	std::cin >> city;
	std::cout << "������� �����\n";
	std::cin >> street;
	std::cout << "������� ����� ����\n";
	std::cin >> house;
	std::cout << "������� ����� ��������\n";
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