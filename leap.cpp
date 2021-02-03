#include <iostream>
using namespace std;

int main() 
{
    int year;

    cout << "Enter year: ";
    cin >> year;
    
    if (year % 4 != 0) 
        cout << " Common Year\n";
    else if (year % 100 != 0)
        cout << " Leap Year\n";
    else if (year % 400 != 0)
        cout << " Common Year\n";
    else
        cout << " Leap year\n";
    

    return 0;

}
