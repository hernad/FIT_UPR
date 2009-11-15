#include <iostream>
using namespace std;

int main()
{

int god;

const string PR_YES = "godina je prijestupna",
             PR_NO = "godina nije prijestupna";

cout << "Unesi godinu (GGGG): ";
cin >> god;
cout << endl;

if ((god % 400) == 0)
   cout << PR_YES; // iznimka (2000 godina)
else
   if ((god % 100) == 0)               // obrnuto ne bi bilo dobro
       cout <<  PR_NO;
   else
       switch ( god % 4) {
          case 0:
              cout <<  PR_YES << endl;
              break;
          case 1:
          case 2:
              cout << PR_NO << endl;
              break;
          default:
              cout << PR_NO << endl;
        }


return 0;

}
