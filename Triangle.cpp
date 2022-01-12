//������ �������� ������� ������� ����� ����� ������� �.�. ���-20.
#include "Triangle.h"
#include <iostream>
#include <math.h>
#include <exception>
#include <string>

void Triangle::set_a(float a1)											//���� �
{
	if (a1 < 0)
	{
		throw std::invalid_argument("�� ����� ���� �������������");		//��� ������ ���� � ������������� 
	}
	else
	{
		this->_a = a1;													// a ����������� � _a
	}
}

void Triangle::set_b(float b1)											//���� b
{
	if (b1 < 0) 
	{
		throw std::invalid_argument("�� ����� ���� �������������");		//��� ������ ���� b �������������
	}
	else
	{
		this->_b = b1;													//b ����������� � _b
	}
}

void Triangle::set_c(float c1)											//���� �
{
	if (c1 < 0)
	{
		throw std::invalid_argument("�� ����� ���� �������������");		//��� ������ ���� � �������������
	}
	else
	{
		this->_c = c1;													//� ����������� � _�
	}
}

void Triangle::set(float a1, float b1, float c1)						//���� ����, �� ��� ������
{
	if (check(_a, _b, _c))
	{
		throw std::invalid_argument("����������� �� ����������. ");
	}
	else
	{
		set_a(a1);
		set_b(b1);
		set_c(c1);
	}
	
}

float Triangle::get_a()
{
	return _a;
}

float Triangle::get_b()
{
	return _b;
}

float Triangle::get_c()
{
	return _c;
}

string Triangle::show() const
{
	string str;
	str = to_string(_a) + " " + to_string(_b) + " " + to_string(_c);
	return str;
}

bool Triangle::check(float a1, float b1, float c1)						//������� �������� ������������� ������������ 
{
	if ((a1 + b1 > c1) && (b1 + c1 > a1) && (a1 + c1 > b1))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
}

float Triangle::search_S()const											//������� ������ �������
{
	float p, S;


	p = (_a + _b + _c) / 2;
	S = sqrt(p * (p - _a) * (p - _b) * (p - _c));

	return S;
}

float Triangle::search_P()const												//������� ������ ���������
{
	float P;

	P = _a + _b + _c;

	return P;
}

float Triangle::search_A()const												//������� ������ ���� �
{
	float cos_A, A = 0;

	cos_A = (_a * _a + _c * _c - _b * _b) / (2 * _a * _c);

	A = acos(cos_A);

	return A;

}

float Triangle::search_B()const												//������� ������ ���� B
{
	float cos_B, B = 0;

	cos_B = (_a * _a + _b * _b - _c * _c) / (2 * _a * _b);

	B = acos(cos_B);

	return B;

}

float Triangle::search_C()const												//������� ������ ���� �
{
	float cos_C, C = 0;

	cos_C = (_b * _b + _c * _c - _a * _a) / (2 * _c * _b);

	C = acos(cos_C);

	return C;
}

Triangle::Triangle()
{
	_a = 1; _b = 1; _c = 1;
}

Triangle::Triangle(float a1, float b1, float c1)
{
	set(a1, b1, c1);
}
