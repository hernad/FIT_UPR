#include <iostream>

using namespace std;

int main()
{
	float f_large;
	double d_large;
	string s_large;
	const string s_title = "Float preciza 1, v3";

        // float - 4 bajta  : predznak 1 bit + 8 bita exponent + 23 bita mantisa =>  +/- 3.4e +/- 38 (~7 digits)
        // double - 8 bajta : predznak 1 bit + 11 bita exp + 52 bita mantisa =>  exp  +/- 1.7e +/- 308 (~15 digits)
	// long double - 10 bajta: predznak 1 bit + 15 bita exp + 64 bita mantisa => +/- 3.4 e +/-4932 (~19 digits)
   	// +/- 1.7e +/- 308 (~15 digits)

	f_large = 123456.1234567890123456789;
	d_large = 123456.1234567890123456789;
	s_large = "123456.1234567890123456789";

	cout << s_title << endl << endl;

	cout << "Evo ga f_large :" << f_large << endl;
	cout << "Evo ga d_large :" << d_large << endl;
	cout << "Je li kao s_large :" << s_large << endl;

	cout << "razlika u preciznosti float <-> double: " << (d_large - f_large) << endl;

	// ako je preciznost float 7 a preciznost double 15 digits, greška bi trebala pokazati 8 cifara
 	cout << "razlika u preciznosti float <-> double * 10^9: " << (d_large - f_large) * 1e9 << endl;

	return 0;
}
