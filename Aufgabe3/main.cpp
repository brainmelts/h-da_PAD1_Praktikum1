// Summe, Mittelwert, Produkt, kleinster und größter Wert von 3 Integern ausgeben
// Autor: Suayb Yurdakul
// Datum: 2018-10-15

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, small, big;

    cout << "Bitte drei unterschiedliche ganze Zahlen eingeben: "; // user prompt
    cin >> num1 >> num2 >> num3;

    // nested if-statements cause apparently we're not allowed to use ternary operators lol
    // SMALL
    if (num1 < num2) {      // num1 < num2 = true
        if (num1 < num3) {  // num1 < num3 = true
            small = num1;   // num1 is small
        }
        else {              // num1 < num2 = true
            small = num3;   // num1 < num3 = false
        }                   // num3 is small
    }
    else {                  // num1 < num2 = false
        if (num2 < num3) {  // num2 < num3 = true
            small = num2;   // num2 is small
        }
        else {              // num1 < num2 = false
            small = num3;   // num2 < num3 = false
        }                   // num3 is small
    }

    // BIG
    if (num1 > num2) {      // num1 > num2 = true
        if (num1 > num3) {  // num1 > num3 = true
            big = num1;     // num1 is big
        }
        else {              // num1 > num2 = true
            big = num3;     // num1 > num3 = false
        }                   // num3 is big
    }
    else {                  // num1 > num2 = false
        if (num2 > num3) {  // num2 > num3 = true
            big = num2;     // num2 is big
        }
        else {              // num1 > num2 = false
            big = num3;     // num2 > num3 = false
        }                   // num3 is big
    }

    // output
    cout << "Die Summe ist \t\t" << (num1 + num2 + num3) << endl;
    cout << "Der Mittelwert ist \t" << ((num1 + num2 + num3) / 3) << endl;
    cout << "Das Produkt ist \t" << (num1 * num2 * num3) << endl;
    cout << "Der kleinste Wert ist \t" << small << endl;
    cout << "Der groesste Wert ist \t" << big << endl;

    // cout << "Der kleinste Wert ist \t" << (num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3)) << endl; // easy way to avoid nested if-statements - ternary operator
    // cout << "Der groesste Wert ist \t" << (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3)) << endl; // is num1 < num2 ? (true) : (false)

    return 0;
}
