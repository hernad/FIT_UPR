
/*

Evo jedan zadatak za razmišljanje:

Napravite program koji će zahtijevati od korisnika da unese neki decimalni broj r, 
a program treba taj broj zaokružiti na cijeli broj (a ne odbaciti decimalni dio). 

Koristite istu metodu kao rješenje zadatka br. 17 (casting operator). 

U nastavku slijedi primjer:
       Unos: 2.43 Ispis: 2
       Unos: 2.76 Ispis: 3

*/

#include <iostream>
using namespace std;

int main()
{
       float r;
       cout << "Unesite neki decimalni broj: ";
       cin >> r;
       cout << int(r + 0.5) << endl;
       return 0;
}

