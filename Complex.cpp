#include "Complex.h"
#include <cmath>

Complex::Complex() : re(0.0), im(0.0) {}

Complex::Complex(double re, double im) : re(re), im(im) {}

Complex Complex::operator+(const Complex& z) const
{
	return Complex(re + z.re, im + z.im);
}

Complex Complex::operator-(const Complex& z) const
{
	return Complex(re - z.re, im - z.im);
}

Complex Complex::operator*(const Complex& z) const
{
	return Complex(re * z.re - im * z.im, re * z.im + im * z.re);
}

Complex Complex::operator*(double r) const
{
	return Complex(re * r, im * r);
}

Complex Complex::operator/(const Complex& z) const
{
	double denom = z.re * z.re + z.im * z.im;
	double newRe = (re * z.re + im * z.im) / denom;
	double newIm = (im * z.re - re * z.im) / denom;
	return Complex(newRe, newIm);
}

Complex Complex::operator+=(const Complex& z)
{
	re += z.re;
	im += z.im;
	return *this;
}

Complex Complex::operator-=(const Complex& z)
{
	re -= z.re;
	im -= z.im;
	return *this;
}

Complex Complex::operator*=(const Complex& z)
{
	double newRe = (re * z.re) - (im * z.im);
	double newIm = (re * z.im) + (im * z.re);
	re = newRe;
	im = newIm;
	return *this;
}

Complex Complex::operator/=(const Complex& z)
{
	double denom = z.re * z.re + z.im * z.im;
	double newRe = (re * z.re + im * z.im) / denom;
	double newIm = (im * z.re - re * z.im) / denom;
	re /= newRe;
	im /= newIm;
	return *this;
}
bool Complex::operator==(const Complex& z) const
{
	return (re == z.re && im == z.im);
}

bool Complex::operator!=(const Complex& z) const
{
	return re != z.re && im != z.im;
}

double Complex::calcPhase() const
{
	return atan2(im, re);
}

double Complex::calcAmplitude() const
{
	return sqrt(re * re + im * im);
}

Complex operator*(double r, const Complex& z)
{
	return z * r;
}
Complex operator+(double r, const Complex& z)
{
	return z + r;
}

Complex operator-(double r, const Complex& z)
{
	return z - r;
}

bool operator!=(double r, const Complex& z)
{
	return z != r;
}
bool operator==(double r, const Complex& z)
{
	return z == r;
}
ostream& operator<<(ostream& out, const Complex& z)
{
	out << "(" << z.re << ", " << z.im << ")";
	return out;
}
