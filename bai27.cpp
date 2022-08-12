#include <iostream>
using namespace std;

int main()
{
   float h , w , a ,p;
   cout << "Enter height:";
   cin >> h;
   cout << "Enter width:";
   cin >> w;
    p = ( h + w) * 2;
    a = h * w;
    cout << "Perimeter: " << p << endl;
    cout << "Area: " << a << endl;
   return 0;	
}