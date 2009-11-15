#include <iostream>

using namespace std;

int main() 
{

 char varijanta = 0;

 cout << "Varijanta ispisa varijanta a / b / c / d : ";
 cin >> varijanta;

 string s_mostar="Mostar";
 const int STR_LEN = 6;

 cout << "Varijanta :" << varijanta << endl;

 for (int i=0; i < STR_LEN; i++)
 {
	char tekuci_znak = s_mostar[i];

	switch (varijanta - 'a')
	{
		case 0:
			cout << tekuci_znak;
			break;
		case 1:
			cout << tekuci_znak;
			cout << ((i < 5) ? "-" : "");
				
			break;
		case 2:
			cout << tekuci_znak << endl;
			break;
		case 3:
			for (int j=0; j < i; j++)
				cout << " ";
			cout << tekuci_znak;
                        cout << endl;
			break;


		default:
			cout << "nepostojeca varijanta" << endl;
	};
 }
 cout << endl;

 return 0;


}
