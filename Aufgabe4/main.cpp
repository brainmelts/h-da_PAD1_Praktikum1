// Fünfstellige ganze Zahl in ihre Ziffern zerlegen und ausgeben.
// Autor: Suayb Yurdakul
// Datum: 2018-10-15

#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Bitte eine fuenfstellige ganze Zahl eingeben: ";
	cin >> num;

	cout <<    (num / 10000) << endl;
	cout <<   ((num % 10000) / 1000) << endl;
	cout <<  (((num % 10000) % 1000) / 100) << endl;
	cout << ((((num % 10000) % 1000) % 100) / 10) << endl;
	cout << ((((num % 10000) % 1000) % 100) % 10) << endl;

	return 0;
}