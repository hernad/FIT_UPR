#include <iostream>

using namespace std;

int main()
{
	float f_1 = 1.0;
	double d_1 = 1.0;
	int i_1 = 1;
	long l_1 = 1;
	unsigned long l_2 = 1;
	long double d_2 = 1.0;

	cout << "float: " << sizeof(f_1) << endl;
	cout << "double: " << sizeof(d_1) << endl;
	cout << "long double: " << sizeof(d_2) << endl;
	cout << "int: " << sizeof(i_1) << endl;

	cout << "long: " << sizeof(l_1) << endl;
	cout << "long usnigned: " << sizeof(l_2) << endl;

	return 0;
}
