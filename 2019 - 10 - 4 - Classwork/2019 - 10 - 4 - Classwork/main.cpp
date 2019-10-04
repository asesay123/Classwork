// Name: Alex Sesay
// Intro to CS
// Period 1
// Mr. Williams
// 2019 - 10 - 04 - Classwork

#include <iostream>
using namespace std;

int main()
{
	// 3
	float pi = 4.0 * (1.0 - (1 / 3.0) + (1 / 5.0) - (1 / 7.0) + (1 / 9.0) - (1 / 11.0));
	float pi2 = 4.0 * (1.0 - (1 / 3.0) + (1 / 5.0) - (1 / 7.0) + (1 / 9.0) - (1 / 11.0) + (1 / 13.0));
	cout << "pi = " << pi << endl;
	cout << "pi2 = " << pi2 << endl;

	//4
	float c;
	cout << "Enter a degree in Celsius: ";
	cin >> c;
	float f = (9.0 / 5.0) * C + 32;
	cout << c << " in Fahrenheit is" << f << endl;   
}