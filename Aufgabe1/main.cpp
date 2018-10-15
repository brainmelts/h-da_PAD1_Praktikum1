#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int number = 7;			// sets initial integer with value 7
	cout << number % 2;		// posts remainder 1 because 7 = (2 * 2) + 1
	number = number / 2;	// sets new value for number = 3 because 7 / 2 = 3[.5] - int discards fractional part in []
	cout << number % 2;		// posts remainder 1 because 3 = (2 * 1) + 1
	number = number / 2;	// sets new value for number = 1 because 3 / 2 = 1[.5]
	cout << number % 2;		// posts remainder 1 because 1 = (2 * 0) + 1
	number = number / 2;	// sets new value for number = 0 because 1 / 2 = 0[.5]
	cout << endl;			// posts end of line statement for line break
}