#include <iostream>
#include <clocale>
#include <Windows.h>

//#include "Helpers.h"
#include "Table.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool flag = true;
	int choise;
	while (flag)
	{
		system("cls");
		std::cout << "__________MENU__________\n\n"
			<< "1: Вывести таблицу на экран\n"
			<< "2: Добавить запись\n"
			<< "3: Создать запрос\n"
			<< "4: Выход\n"
			<< "________________________\n\n"
			<< "Выберите пункт 1-4:  ";
		std::cin >> choise;
		switch (choise)
		{
		case 1:
		{
			system("cls");
			std::cout << "__________MENU__________\n\n"
				<< "1: Сотрудники\n"
				<< "2: Должности\n"
				<< "3: Cтуденты\n"
				<< "4: Группы\n"
				<< "5: Предметы\n"
				<< "6: Расписание\n"
				<< "7: Назад\n"
				<< "________________________\n\n"
				<< "Выберите пункт 1-7:  ";
			std::cin >> choise;
			system("cls");
			switch (choise)
			{
			case 1:
			{
				table t("employee");
				t.show();
				break;
			}
			case 2:
			{
				table t("position");
				t.show();
				break;
			}
			case 3:
			{
				table t("stud");
				t.show();
				break;
			}
			case 4:
			{
				table t("grup");
				t.show();
				break;
			}
			case 5:
			{
				table t("pred");
				t.show();
				break;
			}
			case 6:
			{
				table t("raspisanie");
				t.show();
				break;
			}
			}
			system("pause");
			break;
		}
		case 2:
		{
			system("cls");
			std::cout << "__________MENU__________\n\n"
				<< "1: Сотрудники\n"
				<< "2: Должности\n"
				<< "3: Cтуденты\n"
				<< "4: Группы\n"
				<< "5: Предметы\n"
				<< "6: Расписание\n"
				<< "________________________\n\n"
				<< "Выберите пункт 1-6:  ";
			std::cin >> choise;
			system("cls");
			switch (choise)
			{
			case 1:
			{
				table t("employee");
				t.addLine();
				break;
			}
			case 2:
			{
				table t("position");
				t.addLine();
				break;
			}
			case 3:
			{
				table t("stud");
				t.addLine();
				break;
			}
			case 4:
			{
				table t("grup");
				t.addLine();
				break;
			}
			case 5:
			{
				table t("pred");
				t.addLine();
				break;
			}
			case 6:
			{
				table t("raspisanie");
				t.addLine();
				break;
			}
			}
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			std::cout << "__________MENU__________\n\n"
				<< "1: Отдел кадров\n"
				<< "2: Список студентов\n"
				<< "3: Список предметов\n"
				<< "4: Расписание занятий\n"
				<< "5: Назад\n"
				<< "________________________\n\n"
				<< "Выберите пункт 1-5:  ";
			std::cin >> choise;
			switch (choise)
			{
			case 1:
			{
				system("cls");
				std::cout << "__________MENU__________\n\n"
					<< "1: Без фильтров\n"
					<< "2: Фильтр по должности\n"
					<< "3: Назад\n"
					<< "________________________\n\n"
					<< "Выберите пункт 1-3:  ";
				std::cin >> choise;
				system("cls");
				switch (choise)
				{
				case 1:
				{
					table t("employee");
					std::string farr[1] = { "ID_Должности" };
					std::string sarr[1] = { "position" };
					t.request(farr, sarr, 1);
					break;
				}
				case 2:
				{
					std::string filter_choise;
					std::cout << "Введите должность:  ";
					std::cin.ignore();
					std::getline(std::cin, filter_choise);
					table t("employee");
					std::string farr[1] = { "ID_Должности" };
					std::string sarr[1] = { "position" };
					t.request(farr, sarr, 1, "ID_Должности", filter_choise, "position", "Наименование");
					break;
				}
				}
				break;
			}
			case 2:
			{
				system("cls");
				std::cout << "__________MENU__________\n\n"
					<< "1: Без фильтров\n"
					<< "2: Фильтр для отображения студентов отдельных групп   \n"
					<< "3: Фильтр для отображения групп различных годов обучения \n"
					<< "4: Назад\n"
					<< "________________________\n\n"
					<< "Выберите пункт 1-4:  ";
				std::cin >> choise;
				system("cls");
				switch (choise)
				{
				case 1:
				{
					table t("stud");
					std::string farr[1] = { "ID_Группы" };
					std::string sarr[1] = { "grup" };
					t.request(farr, sarr, 1);
					break;
				}
				case 2:
				{
					std::string filter_choise;
					std::cout << "Введите группу:  ";
					std::cin.ignore();
					std::getline(std::cin, filter_choise);
					table t("stud");
					std::string farr[1] = { "ID_Группы" };
					std::string sarr[1] = { "grup" };
					t.request(farr, sarr, 1, "ID_Группы", filter_choise, "grup", "ФИО");
					break;
				}
				case 3:
				{
					std::string filter_choise;
					std::cout << "Введите год обучения:  ";
					std::cin.ignore();
					std::getline(std::cin, filter_choise);
					table t("grup");
					std::string farr[1] = { "Год_начала_обучения" };
					std::string sarr[1] = { };
					t.request(farr, sarr, 1, "Год_начала_обучения", filter_choise, "grup");
					break;
				}
				}
				break;
			}
			case 3:
			{
				system("cls");
				std::cout << "__________MENU__________\n\n"
					<< "1: Без фильтров\n"
					<< "2: Фильтр для отображения предметов отдельных преподавателей \n"
					<< "3: Назад\n"
					<< "________________________\n\n"
					<< "Выберите пункт 1-3:  ";
				std::cin >> choise;
				system("cls");
				switch (choise)
				{
				case 1:
				{
					table t("pred");
					std::string farr[1] = { "ID_Сотрудника" };
					std::string sarr[1] = { "employee" };
					t.request(farr, sarr, 1);
					break;
				}
				case 2:
				{

					std::string filter_choise;
					std::cout << "Введите ID Сотрудника:  ";
					std::cin.ignore();
					std::getline(std::cin, filter_choise);
					table t("employee");
					std::string farr[1] = { "ID_Сотрудника" };
					std::string sarr[1] = { "pred" };
					t.request(farr, sarr, 1, "ID_Сотрудника", filter_choise, "pred", "ID_Сотрудника");
					break;
				}
				}
				break;
			}
			case 4:
			{
				system("cls");
				std::cout << "__________MENU__________\n\n"
					<< "1: Без фильтров\n"
					<< "2: Фильтр для отображения расписания отдельных групп \n"
					<< "3: Фильтр для отображения расписания отдельных дат \n"
					<< "4: Назад\n"
					<< "________________________\n\n"
					<< "Выберите пункт 1-4:  ";
				std::cin >> choise;
				system("cls");
				switch (choise)
				{
				case 1:
				{
					table t("raspisanie");
					std::string farr[2] = { "ID_Предмета", "ID_Группы" };
					std::string sarr[2] = { "grup", "pred" };
					t.request(farr, sarr, 2);
					break;
				}
				case 2:
				{

					std::string filter_choise;
					std::cout << "Введите ID группы:  ";
					std::cin.ignore();
					std::getline(std::cin, filter_choise);
					table t("raspisanie");
					std::string farr[2] = { "ID_Предмета", "ID_Группы" };
					std::string sarr[2] = { "grup", "pred" };
					t.request(farr, sarr, 2, "ID_Предмета", filter_choise, "grup", "ID_Группы");
					break;
				}
				case 3:
				{

					std::string filter_choise;
					std::cout << "Введите дату занятий:  ";//2.03.2020
					std::cin.ignore();
					std::getline(std::cin, filter_choise);
					table t("raspisanie");
					std::string farr[2] = { "ID_Группы", "ID_Предмета" };
					std::string sarr[2] = { "grup","pred" };
					t.request(farr, sarr, 2, "Дата", filter_choise, "raspisanie");
					break;
				}
				}
				break;
			}
			system("pause");
			break;
			}
		}
		case 5:
		{
			flag = false;
			break;
		}
		default:
		{
			std::cout << "Введены неверные значения\n";
		}
		}
	}


	return 0;
}
