//Работу выполнил студент второго курса ЗабГУ Шарапов В.Н. ВМК-20.
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Triangle //Создание класса треугольник
{
private:
		float _a, _b, _c;					//Стороны треугольника

public:
	Triangle();
	Triangle(float a1, float b1, float c1);
	void set_a(float a1);   //ввод а
	void set_b(float b1);   //ввод b
	void set_c(float c1);   //ввод с
	void set(float a1, float b1, float c1); //ввод a b c
	float get_a();
	float get_b();
	float get_c();
	string show() const;
	bool static check(float a1, float b1, float c1); // Функция проверки существования треугольника
	float search_S()const; //поиск площади
	float search_P()const; //поиск периметра
	float search_A()const; //поиск угла А
	float search_B()const; //поиск угла B
	float search_C()const; //поиск угла С
};


