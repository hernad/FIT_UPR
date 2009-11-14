#include <iostream>

using namespace std;

int main()
{
	char c_eng; 

        cout << "Unesite slovo eng alfabeta" << endl;
        cin >> c_eng;

        cout << "Invert " << char (( c_eng >= 96 ) ?  (c_eng - 32) :  (c_eng + 32) );

	cout << endl;

	return 0;
}
