#pragma once

class Rational 
{
public:
	void doCanonicalForm();
	void setFraction(int num, int denom);
	void setDenom(int denom);
	void setNum(int num);
	int getDenom();
	int getNum();
	Rational(int num = 0, int denom = 1);
	Rational(const Rational &rat);
private:
	int _numerator, _denominator;
};