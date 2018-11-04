#pragma once
#include <string>
using namespace std;

class Rational 
{
public:
	string toString();
	void setFraction(int num, int denom);
	void setDenom(int denom);
	void setNum(int num);
	int getDenom();
	int getNum();
	Rational(int num = 0, int denom = 1);
	Rational(const Rational &rat);
	Rational& operator+=(const Rational& rhs);
	Rational& operator+=(const int& rhs);

	Rational& operator-=(const Rational& rhs);
	Rational& operator-=(const int& rhs);

	Rational& operator*=(const Rational& rhs);
	Rational& operator*=(const int& rhs);

	Rational& operator/=(const Rational& rhs);
	Rational& operator/=(const int& rhs);

	friend Rational& operator+ (Rational& num);
	friend Rational operator- (Rational& num);

	friend Rational operator+(const Rational& c1, const Rational& c2);
	friend Rational operator+(const Rational& c1, int& c2);
	friend Rational operator+(int& c1, const Rational& c2);

	friend Rational operator-(const Rational& c1, const Rational& c2);
	friend Rational operator-(const Rational& c1, int& c2);
	friend Rational operator-(int& c1, const Rational& c2);

	friend Rational operator*(const Rational& c1, const Rational& c2);
	friend Rational operator*(const Rational& c1, int& c2);
	friend Rational operator*(int& c1, const Rational& c2);

	friend Rational operator/(const Rational& c1, const Rational& c2);
	friend Rational operator/(const Rational& c1, int& c2);
	friend Rational operator/(int& c1, const Rational& c2);

	friend Rational operator^(const Rational& c1, int& c2);

	friend bool operator==(const Rational& c1, const Rational& c2);
	friend bool operator==(const Rational& c1, int& c2);
	friend bool operator==(int& c1, const Rational& c2);

	friend bool operator!=(const Rational& c1, const Rational& c2);
	friend bool operator!=(const Rational& c1, int& c2);
	friend bool operator!=(int& c1, const Rational& c2);

	friend bool operator>(const Rational& c1, const Rational& c2);
	friend bool operator>(const Rational& c1, int& c2);
	friend bool operator>(int& c1, const Rational& c2);

	friend bool operator>=(const Rational& c1, const Rational& c2);
	friend bool operator>=(const Rational& c1, int& c2);
	friend bool operator>=(int& c1, const Rational& c2);

	friend bool operator<(const Rational& c1, const Rational& c2);
	friend bool operator<(const Rational& c1, int& c2);
	friend bool operator<(int& c1, const Rational& c2);

	friend bool operator<=(const Rational& c1, const Rational& c2);
	friend bool operator<=(const Rational& c1, int& c2);
	friend bool operator<=(int& c1, const Rational& c2);
private:
	int _numerator, _denominator;	
	void doCanonicalForm();
};