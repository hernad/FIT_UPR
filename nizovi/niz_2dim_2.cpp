//vim: set filetype=cpp expandtab tabstop=2 shiftwidth=2 autoindent smartindent:

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

cout << "nizovi 2-dimenzionalni" << endl;

double a1[2][3];

// Česta greška pri deklaraciji dvodimenzionalnog niza se javlja kad se umjesto
// niz[v1][v2] napiše niz[v1,v2]. Kompajler neće prijaviti grešku već će ovakvu
// deklaraciju tretirati kao jednodimenzionalni niz veličine v2 (niz[v2]).

double a2[2,3];

// gcc prijavljuje:

// niz_2dim_1.cpp:14: error: expected ‘]’ before ‘,’ token
// niz_2dim_1.cpp:14: error: expected unqualified-id before numeric constant


for (int row=0; row<2; row++) 
{
	for(int col=0; col<3;  col++) 
	{
                a2[row,col] = 55;
		cout << "a2[" << row << "," << col << "] " << a2[row,col] << endl;
	}

}

return 0;
}
