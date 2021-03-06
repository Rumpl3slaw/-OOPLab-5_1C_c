#include "Rational_public.h"
#include <Windows.h>



Rational_public::Rational_public()
	:Rational(0, 0, 0, 0)
{}
Rational_public::Rational_public(int a1 = 0, int b1 = 0, int a2 = 0, int b2 = 0)
	: Rational(a1, b1, a2, b2)
{}
Rational_public::Rational_public(Rational_public& X)
	: Rational(X.Get_a1(), X.Get_b1(), Get_a2(), Get_b2())
{}

Rational_public& Rational_public::operator =(const Rational_public& X)
{
	Rational(X.Get_a1(), X.Get_b1(), Get_a2(), Get_b2());
	return *this;
}
ostream& operator <<(ostream& out, const Rational_public& X)
{
	//	int a1, b1, a2, b2;
	out << "\n\nВведені значення :";
	out << "\n a1 = " << X.Get_a1();
	out << "\n b1 = " << X.Get_b1();
	out << "\n a2 = " << X.Get_a2();
	out << "\n b2 = " << X.Get_b2();
	return out;
}
istream& operator >>(istream& in, Rational_public& X)	throw(std::out_of_range)
{
	int a1_1, b1_1, a2_1, b2_1;

	cout << "Введіть чисельник першого дробу(а1) = "; cin >> a1_1;
	cout << "Введіть знаменник першого дробу(b1) = "; cin >> b1_1;
	cout << "Введіть чисельник другого дробу(а2) = "; cin >> a2_1;
	cout << "Введіть знаменник другого дробу(b2) = "; cin >> b2_1;

	if ((a1_1 <= 0) || (b1_1 <= 0) || (a2_1 <= 0) || (b2_1 <= 0))
		throw std::out_of_range{ "\n\nДані введені неправильно" };

	X.Set_a1(a1_1);
	X.Set_b1(b1_1);
	X.Set_a2(a2_1);
	X.Set_b2(b2_1);

	return in;
}
Rational_public::operator string()const
{
	stringstream ss;
	ss << "" << this->Get_a1() << endl;
	ss << "" << this->Get_b1() << endl;
	ss << "" << this->Get_a2() << endl;
	ss << "" << this->Get_b2() << endl;
	return ss.str();
}
Rational_public& Rational_public::operator++()
{
	this->Set_a1(this->Get_a1() + 1);
	this->Set_b1(this->Get_b1() + 1);
	return *this;
}
Rational_public& Rational_public::operator--()
{
	this->Set_a1(this->Get_a1() - 1);
	this->Set_b1(this->Get_b1() - 1);
	return *this;
}
Rational_public Rational_public::operator++(int)
{
	Rational_public t(*this);
	this->Set_a2(this->Get_a2() + 1);
	this->Set_b2(this->Get_b2() + 1);
	return t;
}
Rational_public Rational_public::operator--(int)
{
	Rational_public t(*this);
	this->Set_a2(this->Get_a2() - 1);
	this->Set_b2(this->Get_b2() - 1);
	return t;
}
double Rational_public::Mnojennya()
{
	int Ma = (Get_a1() * Get_a2());
	int Mb = (Get_b1() * Get_b2());
	cout << "Множення дробів = " << Ma << "/" << Mb << endl;
	return Ma;
}
double Rational_public::Dodavannya()
{
	int Da = (Get_a1() * Get_b2() + Get_a2() * Get_b1());
	int Db = (Get_b1() * Get_b2());
	cout << "Додавання дробів = " << Da << "/" << Db << endl;
	return Da, Db;
}
double Rational_public::Vidnimannya()
{
	int Va = (Get_a1() * Get_b2() - Get_a2() * Get_b1());
	int Vb = (Get_b1() * Get_b2());
	cout << "Віднімання дробів = " << Va << "/" << Vb << endl;
	return Va, Vb;
}
double Rational_public::Value()
{
	cout << "Перший оперований дріб : " << Get_b1() << "/" << Get_a1() << endl;
	cout << "Другий оперований дріб : " << Get_b2() << "/" << Get_a2() << endl;
	return 1. * Get_a1() / Get_b1();
}
