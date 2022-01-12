//������ �������� ������� ������� ����� ����� ������� �.�. ���-20.
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Triangle //�������� ������ �����������
{
private:
		float _a, _b, _c;					//������� ������������

public:
	Triangle();
	Triangle(float a1, float b1, float c1);
	void set_a(float a1);   //���� �
	void set_b(float b1);   //���� b
	void set_c(float c1);   //���� �
	void set(float a1, float b1, float c1); //���� a b c
	float get_a();
	float get_b();
	float get_c();
	string show() const;
	bool static check(float a1, float b1, float c1); // ������� �������� ������������� ������������
	float search_S()const; //����� �������
	float search_P()const; //����� ���������
	float search_A()const; //����� ���� �
	float search_B()const; //����� ���� B
	float search_C()const; //����� ���� �
};


