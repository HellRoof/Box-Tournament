#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "Log.h"

class Menu  //Класс Меню. в .h обьявление в .сpp инициализация методов.
	//С помощью этого класса мы создаем меню и производим операции с ним же
{
	std::string menuName;
	std::vector<std::string> options;

public:
	Menu(const std::string& name);
	void addOption(const std::string& option_caption);
	int askOption();

private:
	static bool comparator(const std::string& option1, const std::string& option2)
	{
		return option1.length() < option2.length();
	}

	size_t getMenuWidth();
};