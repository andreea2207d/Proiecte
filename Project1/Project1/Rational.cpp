#include "Rational.hpp"

void Rational::doCanonicalForm()
{
	// Divide both numbers with greatest common divisior

	int smallest = _numerator < _denominator ? _numerator : _denominator;
	int gcd = 1;

	for (int i = 2; i < smallest; i++) {
		if (_numerator % i == 0 && _denominator % i == 0) {
			gcd = i;
		}
	}

	_numerator /= gcd;
	_denominator /= gcd;
}

void Rational::setFraction(int denom, int num)
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
