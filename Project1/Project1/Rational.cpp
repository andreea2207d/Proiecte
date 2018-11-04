#include "Rational.hpp"
#include <cmath>

void Rational::doCanonicalForm()
{
	// Divide both numbers with greatest common divisior

	int smallest = _numerator < _denominator ? _numerator : _denominator;
	int gcd = 1;

	for (int i = 2; i <= smallest; i++) {
		if (_numerator % i == 0 && _denominator % i == 0) {
			gcd = i;
		}
	}

	_numerator /= gcd;
	_denominator /= gcd;
}

string Rational::toString()
{
	string str;
	str = to_string(_numerator);
	if (_denominator != 0) {
		str += "/" + to_string(_denominator);
	}

	return str;
}

void Rational::setFraction(int num, int denom)
{
	_denominator = denom;
	_numerator = num;

	doCanonicalForm();
}

void Rational::setNum(int num)
{
	_numerator = num;

	doCanonicalForm();
}

void Rational::setDenom(int denom)
{
	_denominator = denom;

	doCanonicalForm();
}

int Rational::getDenom()
{
	return _denominator;
}

int Rational::getNum()
{
	return _numerator;
}

Rational::Rational(int num, int denom)
{
	if (denom == 0) {
		throw "Denominator is 0";
	}
	else {
		_denominator = denom;
		_numerator = num;

		doCanonicalForm();
	}
}

Rational::Rational(const Rational & rat)
{
	_denominator = rat._denominator;
	_numerator = rat._numerator;
}

Rational& Rational::operator+=(const Rational & rhs)
{
	_numerator = _numerator * rhs._denominator + _denominator * rhs._numerator;
	_denominator *= rhs._denominator;

	doCanonicalForm();

	return *this;
}

Rational & Rational::operator+=(const int & rhs)
{
	_numerator = _numerator + _denominator * rhs;

	doCanonicalForm();

	return *this;
}

Rational & Rational::operator-=(const Rational & rhs)
{
	_numerator = _numerator * rhs._denominator - _denominator * rhs._numerator;
	_denominator *= rhs._denominator;

	doCanonicalForm();

	return *this;
}

Rational & Rational::operator-=(const int & rhs)
{
	_numerator = _numerator - _denominator * rhs;

	doCanonicalForm();

	return *this;
}

Rational & Rational::operator*=(const Rational & rhs)
{
	_denominator *= rhs._denominator;
	_numerator *= rhs._numerator;

	doCanonicalForm();

	return *this;
}

Rational & Rational::operator*=(const int & rhs)
{
	_numerator *= rhs;

	doCanonicalForm();

	return *this;
}

Rational & Rational::operator/=(const Rational & rhs)
{
	_denominator *= rhs._numerator;
	_numerator *= rhs._denominator;

	doCanonicalForm();

	return *this;
}

Rational & Rational::operator/=(const int & rhs)
{
	_denominator *= rhs;

	doCanonicalForm();

	return *this;
}

Rational & operator+(Rational & num)
{
	return num;
}

Rational operator-(Rational & num)
{
	Rational newN = Rational(-num._numerator, num._denominator);

	return newN;
}

Rational operator+(const Rational & c1, const Rational & c2)
{
	int num, denum;
	num = c1._numerator * c2._denominator + c1._denominator * c2._numerator;

	denum = c1._denominator * c2._denominator;

	Rational newN = Rational(num, denum);

	return newN;
}

Rational operator+(const Rational & c1, int & c2)
{
	int num, denum;
	num = c1._numerator + c1._denominator * c2;

	denum = c1._denominator;

	Rational newN = Rational(num, denum);

	return newN;
}

Rational operator+(int & c1, const Rational & c2)
{
	return operator+(c2, c1);
}


Rational operator-(const Rational & c1, const Rational & c2)
{
	int num, denum;
	num = c1._numerator * c2._denominator - c1._denominator * c2._numerator;

	denum = c1._denominator * c2._denominator;

	Rational newN = Rational(num, denum);

	return newN;
}

Rational operator-(const Rational & c1, int & c2)
{
	int num, denum;
	num = c1._numerator - c1._denominator * c2;

	denum = c1._denominator;

	Rational newN = Rational(num, denum);

	return newN;
}

Rational operator-(int & c1, const Rational & c2)
{
	int num, denum;
	num = c2._denominator * c1 - c2._numerator;

	denum = c2._denominator;

	Rational newN = Rational(num, denum);

	return newN;
}

Rational operator*(const Rational & c1, const Rational & c2)
{
	int num, denum;
	num = c1._numerator * c2._numerator;

	denum = c1._denominator * c2._denominator;

	Rational newN = Rational(num, denum);

	return newN;
}

Rational operator*(const Rational & c1, int & c2)
{
	int num, denum;
	num = c1._numerator * c2;

	denum = c1._denominator;

	Rational newN = Rational(num, denum);

	return newN;
}

Rational operator*(int & c1, const Rational & c2)
{
	return operator*(c2, c1);
}

Rational operator/(const Rational & c1, const Rational & c2)
{
	int num, denum;
	num = c1._numerator * c2._denominator;

	denum = c1._denominator * c2._numerator;

	Rational newN = Rational(num, denum);

	return newN;
}

Rational operator/(const Rational & c1, int & c2)
{
	int num, denum;
	num = c1._numerator;

	denum = c1._denominator * c2;

	Rational newN = Rational(num, denum);

	return newN;
}

Rational operator/(int & c1, const Rational & c2)
{
	int num, denum;
	num = c1 * c2._denominator;

	denum = c2._numerator;

	Rational newN = Rational(num, denum);

	return newN;
}

Rational operator^(const Rational & c1, int & c2)
{
	int num, denum;
	num = pow(c1._numerator, c2);

	denum = pow(c1._denominator, c2);

	Rational newN = Rational(num, denum);

	return newN;
}