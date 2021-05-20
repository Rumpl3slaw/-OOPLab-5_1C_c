#include <iostream>
#include <Windows.h>
#include <math.h>

#include "Rational.h"
#include "My_Error_Range.h"


using namespace std;

int Rational::Get_a1()const { return a1; }
int Rational::Get_b1()const { return b1; }
int Rational::Get_a2()const { return a2; }
int Rational::Get_b2()const { return b2; }

void Rational::Set_a1(int value) { a1 = value; }
void Rational::Set_b1(int value) { b1 = value; }
void Rational::Set_a2(int value) { a2 = value; }
void Rational::Set_b2(int value) { b2 = value; }

Rational::Rational() { a1 = 0, b1 = 0, a2 = 0, b2 = 0; }
Rational::Rational(int a1 = 0, int b1 = 0, int a2 = 0, int b2 = 0)	throw(My_Error_Range)
{
	if ((a1 <= 0) || (b1 <= 0) || (a2 <= 0) || (b2 <= 0))
		throw new My_Error_Range("\n\nНеправильно введені дані");		//генерування об'єкта винятка

	this->a1 = a1;
	this->b1 = b1;
	this->a2 = a2;
	this->b2 = b2;
}
Rational::Rational(const Rational& X)
{
	a1 = X.Get_a1();
	b1 = X.Get_b1();
	a2 = X.Get_a2();
	b2 = X.Get_b2();
}
void Rational::Read()	throw(std::out_of_range)
{
	int a1_1, b1_1, a2_1, b2_1;

	cout << "Введіть чисельник першого дробу(а1) = "; cin >> a1_1;
	cout << "Введіть знаменник першого дробу(b1) = "; cin >> b1_1;
	cout << "Введіть чисельник другого дробу(а2) = "; cin >> a2_1;
	cout << "Введіть знаменник другого дробу(b2) = "; cin >> b2_1;

	if ((a1_1 <= 0) || (b1_1 <= 0) || (a2_1 <= 0) || (b2_1 <= 0))
		throw std::out_of_range{ "\n\nДані введені неправильно" };

	a1 = a1_1;
	b1 = b1_1;
	a2 = a2_1;
	b2 = b2_1;
}
void Rational::Display()
{
	cout << "Перший дріб : " << Get_a1() << "/" << Get_b1() << endl;
	cout << "Другий дріб : " << Get_a2() << "/" << Get_b2() << endl;
}