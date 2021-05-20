#pragma once

#include <iostream>
#include <sstream>

using namespace std;

class Rational {
private:
	int a1, b1, a2, b2;
public:
	int Get_a1()const;
	int Get_b1()const;
	int Get_a2()const;
	int Get_b2()const;

	void Set_a1(int value);
	void Set_b1(int value);
	void Set_a2(int value);
	void Set_b2(int value);

	Rational();
	Rational(int, int, int, int);
	Rational(const Rational&);

	void Display();
	void Read();
};