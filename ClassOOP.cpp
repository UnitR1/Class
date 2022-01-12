//Работу выполнил студент второго курса ЗабГУ Шарапов В.Н. ВМК-20.
#include <iostream>
#include <gtest/gtest.h>
#include "Triangle.h"

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	float a, b, c;
	Triangle t1;

	cin >> a;
	cin >> b;
	cin >> c;

	try																//Защищенный блок кода 
	{
		t1.set(a, b, c);											//Ввод а, b, c
	}

	catch (exception e)												//Проверка введены ли положительные данные
	{
		cout << "Произошла ошибка" << e.what();
	}

	cout << "Сторона треугольника а = " << t1.get_a() << endl;
	Triangle::check(a, b, c);										//Проверка на существование треугольника
	cout << "Треугольник существует." << endl;
	cout << "Площать равна: " << t1.search_S() << endl;				//Поиск площади
	cout << "Периметр равен: " << t1.search_P() << endl;			//Поиск периметра
	cout << "Угол А равен: " << t1.search_A() << endl;				//Поиск угла А
	cout << "Угол B равен: " << t1.search_B() << endl;				//Поиск угла В
	cout << "Угол С равен: " << t1.search_C() << endl;				//Поиск угла С

	cin >> a;
	cin >> b;
	cin >> c;

	Triangle *t2;

	t2 = new Triangle;												//динамическое выдиление памяти 

	try																//Защищенный блок кода 
	{
		t2->set(a, b, c);											//Ввод а, b, c
	}

	catch (exception e)												//Проверка введены ли положительные данные
	{
		cout << "Произошла ошибка" << e.what();
	}

	cout << "Сторона треугольника а = " << t2->get_a() << endl;
	cout << "Сторона треугольника b = " << t2->get_b() << endl;
	cout << "Сторона треугольника c = " << t2->get_c() << endl;
	Triangle::check(a, b, c);										//Проверка на существование треугольника
	cout << "Треугольник существует." << endl;
	cout << "Площать равна: " << t2->search_S() << endl;			//Поиск площади
	cout << "Периметр равен: " << t2->search_P() << endl;			//Поиск периметра
	cout << "Угол А равен: " << t2->search_A() << endl;				//Поиск угла А
	cout << "Угол B равен: " << t2->search_B() << endl;				//Поиск угла В
	cout << "Угол С равен: " << t2->search_C() << endl;				//Поиск угла С

	Triangle t_arr[10];												//массив из объектов класса
	t_arr[0].set(3, 5, 6);											//меняем 0 эллемент массива 
	cout << "массив: " << t_arr[0].show() << endl;					//вывод 

	Triangle* t_arr1 = new Triangle[10];							//дин массив из объектов класса
	t_arr1[0].set(4, 5, 7);											//меняем 0 элемент
	cout << "дин. массив: " << t_arr1[0].show();					//выводим 0 элемент
	delete[] t_arr1;												//очищаем память
	cout << endl;

	cout << "Массив указателей на объекты класса " << endl;			
	Triangle* t_arr2[10];											//дин массив указателейн на объекты класса
	for (int i = 0; i < 10; i++)						
	{
		a = 1 + rand() % 100;
		b = 1 + rand() % 100;
		c = 1 + rand() % 100;
		t_arr2[i] = new Triangle;									// выделяем память
		t_arr2[i]->set(a, b, c);									// указываем стороны треугольника для каждого объекта
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "дин массив" << "[" << i << "] = " << (*t_arr2[i]).show();		//вывод информации для каждого объекта
		delete t_arr2[i];
		cout << endl;
	}


}
	
	