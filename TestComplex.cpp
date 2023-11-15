#include "Complex.h"
#include <iostream>

void test_arithmetic()
{
	Complex a(3.0, 4.0), a1(5.0, 2.00);
	cout << "\narithemtic operators:" << endl;
	cout << a + a1;
	cout << a * a1;
	cout << a - a1;
	cout << a / a1;
	cout << endl;
}

void test_arithmetic_eq()
{
	Complex a(5.0, 3.0), b(2.0, 6.0), c(3.0, 5.0);
	cout << "\narithemtic = operators:" << endl;
	a += b += c;
	cout << "a:" << a << endl;
	a *= b *= c;
	cout << "a:" << a << endl;

	Complex a1(4, 6);
	cout << 7 + a1 << endl;

	Complex b1(3, 5);
	cout << b1 + 7 << endl;

	Complex c1(3, 7), c2(4, 2), c3(3, 5);
	(c1 += c2) += c3;
	cout << c1 << endl;
	(c1 *= c2) *= c3;
	cout << c1 << endl;

	Complex a2(3, 6), a3(5, 2);
	cout << a2 * 5 << endl;
	cout << 5 * a3 << endl;
}

void test_comparisons()
{
	cout << "\ncomparison operators:" << endl;
	Complex a(3.5, 0), b(3, 3.5);
	// a == 3.5;
	if (a == 3.5) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	if (3.5 == b) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
}

void test_phase_and_amp()
{
	Complex c7(3, 4);
	cout << "\nAmplitude: " << c7.calcAmplitude() << endl;
	cout << "Phase(radians): " << c7.calcPhase() << endl;
}

int main()
{
	test_arithmetic();
	test_arithmetic_eq();
	test_phase_and_amp();
	test_comparisons();

	return 0;
}
