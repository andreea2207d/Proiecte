#pragma once

class Rational 
{
public:
	void doCanonicalForm();
	void setFraction(int denom, int num);
	void setDenom(int denom);
	void setNum(int num);
	int getDenom();
	int getNum();
private:
	int _denominator, _numerator;
};