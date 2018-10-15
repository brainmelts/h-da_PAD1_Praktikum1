// Drei Zeichen von der Tastatur in typ unsigned char typecasten und Dezimal und Hexadezimal ausgeben.
// Autor: Suayb Yurdakul
// Datum: 2018-10-15

#include <iostream>
using namespace std;

int main()
{
	unsigned char in1, in2, in3;

	cout << "Bitte drei Zeichen eingeben: ";
	cin >> in1 >> in2 >> in3;
	
	cout << "INPUT\tDECIMAL\tHEXADECIMAL" << endl;
	cout << in1 << "\t",
		cout << dec << static_cast<int>(in1) << "\t",
		cout << hex << static_cast<int>(in1) << endl;
	cout << in2 << "\t",
		cout << dec << static_cast<int>(in2) << "\t",
		cout << hex << static_cast<int>(in2) << endl;
	cout << in3 << "\t",
		cout << dec << static_cast<int>(in3) << "\t",
		cout << hex << static_cast<int>(in3) << endl;

	return 0;
}