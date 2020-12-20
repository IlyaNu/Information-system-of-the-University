#include <iostream>
#include <clocale>
#include "StructPred.h"

void pred::title()
{
	std::cout << std::left << std::setw(5) << "ID Предмета";
	std::cout << std::left << std::setw(10) << "Наименование";
	std::cout << std::left << std::setw(5) << "Описание";
	std::cout << std::left << std::setw(15) << "Код сотрудника-преподавателя";
}

void pred::request()
{
	std::cout << "Введите код предмета\n";
	std::cin >> id_pred;
	std::cout << "Введите наименование\n";
	std::cin >> pred;
	std::cout << "Введите описание\n";
	std::cin >> opisanie;
	std::cout << "Введите код сотрудника-преподавателя\n";
	std::cin >> id_pred_sotr;
}

void pred::show()
{
	std::cout << std::left << std::setw(5) << id_pred;
	std::cout << std::left << std::setw(10) << pred;
	std::cout << std::left << std::setw(5) << opisanie;
	std::cout << std::left << std::setw(15) << id_pred_sotr;
}

bool pred::read(std::ifstream* ifs)
{
	if (!ifs) return false;
	if (ifs->peek() == EOF) return false;

	*ifs >> id_pred;
	*ifs >> pred;
	*ifs >> opisanie;
	*ifs >> id_pred_sotr;

	if (ifs->good())
		return true;
	return false;
}

bool pred::write(std::ofstream* ofs)
{
	if (!ofs) return false;

	*ofs << std::left << std::setw(5) << id_pred;
	*ofs << std::left << std::setw(10) << pred;
	*ofs << std::left << std::setw(5) << opisanie;
	*ofs << std::left << std::setw(15) << id_pred_sotr;
	if (ofs->good()) return true;
	return false;
}