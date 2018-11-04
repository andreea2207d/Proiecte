#include "Rational.hpp"

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
