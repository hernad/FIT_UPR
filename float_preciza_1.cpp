#include <iostream>

using namespace std;

int main()
{
	float f_large;
	double d_large;
	string s_large;

	f_large = 1234567890.1234567890123456789;
	d_large = 1234567890.1234567890123456789;
	s_large = "1234567890.1234567890123456789";

	cout << "Evo ga f_large :" << f_large << endl;
	cout << "Evo ga d_large :" << d_large << endl;
	cout << "Je li kao s_large :" << s_large << endl;

	cout << "razlika u preciznosti float <-> double:" << (d_large - f_large) << endl;

	return 0;
}
