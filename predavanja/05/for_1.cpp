#include <iostream>

using namespace std;

int main()
{
       int sum = 0;
       for ( int number = 2; number <= 100; number += 2 )
             sum += number;
       cout << "Sum is " << sum << endl;

       return 0;

}

