#pragma once
#include "Menu.h"
#include "Tournament.h"
#include "Settings.h"

//В .h обьявление в .сpp инициализация методов.
class Game //Класс "Игра", в котором есть метод "запуск"
{
	Tournament tournament; //Обьект класса турнир
	
public:
	
	void run();
};