#include <iostream>

using namespace std;

int main()
{
	int b_1, b_2;

        cout << "Unesite dva cijela broja" << endl;
        cin >> b_1 >> b_2;

        cout << "Najveci je " << ((b_1 >= b_2 ) ? b_1 : b_2);

	cout << endl;

	return 0;
}
