#pragma once
#include <iostream>
#include <string>

enum class BodyPart  //Перечисление мест для удара и защиты боксеров.
{
	NONE, HEAD, LIVER, BODY, STOMACH, ARM
};

std::string bodyPartToString(BodyPart part);

std::ostream& operator<<(std::ostream& out, BodyPart part); //Перегрузка оператора 

int bodyPartPoints(BodyPart part);

BodyPart bodyPartByNumber(int number);
