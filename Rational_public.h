#pragma once
#pragma once
#include "Rational.h"


class Rational_public :public Rational
{
public:
	Rational_public();
	Rational_public(int, int, int, int);
	Rational_public(Rational_public&);

	Rational_public& operator = (const Rational_public&);
	operator string() const;

	friend ostream& operator <<(ostream&, const Rational_public&);
	friend istream& operator >>(istream&, Rational_public&);

	Rational_public& operator ++();
	Rational_public& operator --();

	Rational_public operator ++(int);
	Rational_public operator--(int);

	double Value();
	double Dodavannya();
	double Vidnimannya();
	double Mnojennya();


};