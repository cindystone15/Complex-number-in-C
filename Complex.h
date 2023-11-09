#include <cmath>
#include <iostream>

using namespace std;

struct Complex {
	double re, im;

	Complex();

	Complex(double re, double im = 0.0);

	Complex operator+(const Complex& z) const;

	Complex operator-(const Complex& z) const;

	Complex operator*(const Complex& z) const;

	Complex operator*(double r) const;

	Complex operator+=(const Complex& z);

	Complex operator-=(const Complex& z);

	Complex operator*=(const Complex& z);

	Complex operator/=(const Complex& z);

	bool operator==(const Complex& z) const;

	bool operator!=(const Complex& z) const;

	double calcPhase() const;
	double calcAmplitude() const;
};

ostream& operator<<(ostream& out, const Complex& z);
Complex operator*(double r, const Complex& z);
Complex operator+(double r, const Complex& z);
Complex operator-(double r, const Complex& z);
