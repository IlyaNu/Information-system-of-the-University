#include <iostream>
#include <clocale>
#include "StructRas.h"

void raspisanie::title()
{
	std::cout << std::left << std::setw(5) << "����";
	std::cout << std::left << std::setw(10) << "���� ������";
	std::cout << std::left << std::setw(5) << "��� ������";
	std::cout << std::left << std::setw(15) << "��� ��������";
	std::cout << std::left << std::setw(15) << "����� ������";
	std::cout << std::left << std::setw(15) << "����� ���������";
}

void raspisanie::request()
{
	std::cout << "������� ����\n";
	std::cin >> data;
	std::cout << "������� ���� ������\n";
	std::cin >> dennedeli;
	std::cout << "������� ��� ������\n";
	std::cin >> id_grup;
	std::cout << "������� ��� ��������\n";
	std::cin >> id_pred;
	std::cout << "������� ����� ������\n";
	std::cin >> begin;
	std::cout << "������� ����� ���������\n";
	std::cin >> end;
}

void raspisanie::show()
{
	std::cout << std::left << std::setw(5) << data;
	std::cout << std::left << std::setw(10) << dennedeli;
	std::cout << std::left << std::setw(5) << id_grup;
	std::cout << std::left << std::setw(15) << id_pred;
	std::cout << std::left << std::setw(5) << begin;
	std::cout << std::left << std::setw(5) << end;
}

bool raspisanie::read(std::ifstream* ifs)
{
	if (!ifs) return false;
	if (ifs->peek() == EOF) return false;

	*ifs >> data;
	*ifs >> dennedeli;
	*ifs >> id_grup;
	*ifs >> id_pred;
	*ifs >> begin;
	*ifs >> end;

	if (ifs->good())
		return true;
	return false;
}

bool raspisanie::write(std::ofstream* ofs)
{
	if (!ofs) return false;

	*ofs << std::left << std::setw(5) << data;
	*ofs << std::left << std::setw(10) << dennedeli;
	*ofs << std::left << std::setw(5) << id_grup;
	*ofs << std::left << std::setw(15) << id_pred;
	*ofs << std::left << std::setw(15) << begin;
	*ofs << std::left << std::setw(15) << end;
	if (ofs->good()) return true;
	return false;
}