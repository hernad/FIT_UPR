//vim: set filetype=cpp expandtab tabstop=2 shiftwidth=2 autoindent smartindent:

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

cout << "nizovi 2-dimenzionalni" << endl;

double a1[2][3];

int a2[3][2]={{1,2}, {3,4}, {5,6}};


for (int row=0; row<2; row++) 
{
	for(int col=0; col<3;  col++) 
	{
                a1[row][col] = sqrt( (row + col*5) + 15.5 );

		//cout << "a1[" << row << "," << col << "] " << a1[row,col] << endl;

		cout << "a1[" << row << "][" << col << "] " << a1[row][col] << endl;
	}

}

cout << "------------------------------------------------" << endl;

for (int row=0; row<3; row++) 
{
	for(int col=0; col<2;  col++) 
	{
		cout << "a2[" << row << "][" << col << "] " << a2[row][col] << endl;
	}

}


for (int row=0; row<6; row++) 
{
	double *val = a1[row];
	cout << "a1[" << row << "] " << *val << endl;
}

cout << "------------------------------------------------" << endl;

for (int row=0; row<6; row++) 
{
	int *val = a2[row];
	cout << "(int *) a2[" << row << "] " << *val << endl;
	cout << "a2[" << row << "] " << a2[row] << endl;

}



return 0;
}
