#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter the first number: ";
        cin >> a;
    cout << "Enter the second number: ";
        cin >> b;
    cout << "Enter the third number: ";
        cin >> c;

   if (a < b)
        d = a;
    else
        d = b;

        cout << "the smallest of the three numbers is: " << ((d < c) ? d : c) << endl; //


    return 0;

}