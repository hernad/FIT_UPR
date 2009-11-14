#include <iostream>

using namespace std;

// http://en.wikipedia.org/wiki/Fahrenheit


int main()
{

float temp_c, temp_f;

cout << "unesite temperaturu u Celsius: ";
cin >> temp_c;

temp_f = 9.0/5.0 * temp_c + 32;


cout << endl << "Rezultat - temperatura u Farenheit je:" << temp_f << endl;

cout << " ----------- varijanta - kako je stavljeno na vjezbama: --------" << endl;

temp_f = 9 * temp_c / 5 + 32;

cout << endl << "Rezultat varijanta cjelobrojno - temperatura u Farenheit je:" << temp_f << endl;


cout << " ----------- varijanta 3 - ovo nece valjati - jer 9/5 pravi cjelobrojno djeljenje : --------" << endl;

temp_f = 9/5 * temp_c + 32;

cout << endl << "Rezultat varijanta  - 3 cjelobrojno - temperatura u Farenheit je:" << temp_f << endl;

return 0;

}
