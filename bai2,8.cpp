#include <iostream>
using namespace std;
int main()
{   

  
    int ngay;
    long days;
    int day , month , year;
    cout << "Enter days:  ";
    cin >> days;
    year = days / 365;
    month = (days % 365) / 30;
    day = (days % 365) % 30;
    cout << "Year: " << year << endl;
    cout << "Month: " << month << endl;
    cout << "Day: " << day << endl;
    return 0;
}
