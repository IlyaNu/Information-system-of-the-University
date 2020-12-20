#pragma once
#include <fstream>
#include <iomanip>
#include <string>

struct snp
{
	std::string surname;
	std::string name;
	std::string patronymic;

	void title();
	void request();
	void show();
	bool read(std::ifstream* ifs);
	bool write(std::ofstream* ofs);
};

struct passport
{
	unsigned int serie;
	unsigned int number;

	void title();
	void request();
	void show();
	bool read(std::ifstream* ifs);
	bool write(std::ofstream* ofs);
};

struct address
{
	std::string city;
	std::string street;
	unsigned int house;
	unsigned int apartment;

	void title();
	void request();
	void show();
	bool read(std::ifstream* ifs);
	bool write(std::ofstream* ofs);
};

