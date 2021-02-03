#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the first number: ";
        cin >> a;
    cout << "Enter the second number: ";
        cin >> b;

   if (a < b)
        c = a;
    else
        c = b;

        cout << "The smallest of the two numbers is: " << c << endl; //


    return 0;

}