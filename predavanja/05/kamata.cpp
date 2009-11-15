// Računanje kamate

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   double amount,               // amount on deposit
          principal = 1000.0,   // starting principal
          rate = .05;                // interest rate

   cout << setw(4) << "Year" 
        << setw(21) << "Amount on deposit" << endl;

   for ( int year = 1; year <= 10; year++ )    //postinkrement kao brojač
   {

      amount = principal * pow( 1.0 + rate, year );
      cout << setw(4) << year
           << setiosflags( ios::fixed | ios::showpoint ) //decimalna tačka

           << setw( 21 ) << setprecision( 2 )   //tačnost na dvije decimale
           << amount << endl;
   }

   return 0;
}

