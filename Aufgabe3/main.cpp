// Summe, Mittelwert, Produkt, kleinster und größter Wert von 3 Integern ausgeben
// Autor: Suayb Yurdakul
// Datum: 2018-10-15

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;

	cout << "Bitte drei unterschiedliche ganze Zahlen eingeben: "; // user prompt
	cin >> num1 >> num2 >> num3;

	// output
	cout << "Die Summe ist \t\t" << (num1 + num2 + num3) << endl;
	cout << "Der Mittelwert ist \t" << ((num1 + num2 + num3) / 3) << endl;
	cout << "Das Produkt ist \t" << (num1 * num2 * num3) << endl;
	cout << "Der kleinste Wert ist \t" << (num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3)) << endl; // easy way to avoid nested if-statements - ternary operator
	cout << "Der groesste Wert ist \t" << (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3)) << endl; // is num1 < num2 ? (true) : (false)

	return 0;
}