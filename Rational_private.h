#pragma once
#include "Rational.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Rational_private :private Rational {
public:
	using Rational::Get_a1;
	using Rational::Get_b1;
	using Rational::Get_a2;
	using Rational::Get_b2;

	using Rational::Set_a1;
	using Rational::Set_b1;
	using Rational::Set_a2;
	using Rational::Set_b2;

	Rational_private();
	Rational_private(int, int, int, int);
	Rational_private(Rational_private&);


	Rational_private& operator = (const Rational_private&);
	operator string() const;

	friend ostream& operator << (ostream&, const Rational_private&);
	friend istream& operator >>(istream&, Rational_private&);

	Rational_private& operator ++();
	Rational_private& operator --();

	Rational_private operator ++(int);
	Rational_private operator--(int);

	double Value();
	double Dodavannya();
	double Vidnimannya();
	double Mnojennya();

};