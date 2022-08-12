#include <iostream>
using namespace std;

int main()
{
   float a1, a2 , a3;
   cout << "Enter the first angle: ";
   cin >> a1;
   cout << "Enter the second angle: ";
   cin >> a2;
   a3 = 180 - a1 - a2;
   cout << "The third angle: " << a3 << endl;
   return 0;
}