// Ä u00C4 ä u00E4 / Ö u00D6 ö u00F6 / Ü u00DC ü u00FC / ß u00DF
#include <iostream>
#include <locale>
using namespace std;

int main()
{
	cout << "Draußen brüllen Bären und Löwen!" << endl;
	cin.ignore(); // wait for user
	cout << "Drau\u00DFen br\u00FCllen B\u00E4ren und L\u00F6wen!" << endl; // hexadecimal didn't wanna work so it had to subside in favor of unicode
	cin.ignore(); // wait for user
	setlocale(LC_ALL, ""); // use character set of local system
	cout << "Draußen brüllen Bären und Löwen!";
	cout << endl << endl;
	cin.ignore(); // wait for user
}