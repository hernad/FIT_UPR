/* izracunava x na y potenciju */
 #include <iostream>
using namespace std;

int main()
{

  int x, y, i, power;

  i = 1;
  power = 1;

  cout << "Proracun x ** y" << endl;

  cout << "Unesite x: "; 
  cin >> x;

  cout << "Unesite y: ";
  cin >> y;

  while (i <= y)
  {
	power *= x;
	++i;
  }
  cout << "Rezultat je: " << power << endl;
 
  return 0;

}
