#include <iostream>
#include "Complex.h"


int main()
{
	Complex c1;			  // Default constructor is called.
	Complex c2(2.0, 3.0); // 2-arg constructor used.

	cout << c2;
	cout << endl;

	cout << c2 << endl << c2 << endl;

	// It's executed like this:
	(((cout << c2) << endl) << c2) << endl;

	Complex c3(2, 5), c4(4, -8);
	cout << c3 + c4 << endl;

	c3 += c4;
	c3 = 5 * c3;
	cout << c3 << endl;

	Complex c5(4, 1);
	c5 = c5 + 6;
	cout << c5 << endl;

	// works
	Complex c6(2, 4);
	c4 /= c6;
	cout << c4 << endl;
	
	Complex c7(3, 4);
	cout<< "Amplitude: " << c7.calcAmplitude() << endl;
	cout<< "Phase(radians): " << c7.calcPhase() << endl;

	return 0;
}
