#include <iostream>
using namespace std;

int main(){
    int year;
    int month;
    cout << "Enter year: ";
    cin >> year;
    cout << endl;
    cout << "Enter month: ";
    cin >> month;
    cout << endl;


    if (month == 1){
        cout << "31 days" << endl;
    }
    if (month == 2){
        if ((year % 400 == 0) || (year%4 == 0 && year%100 != 0)){
            cout << "29 days" << endl;
        }
        else{
            cout << "28 days" << endl;

        }
    }    
    if (month == 3){
        cout << "31 days" << endl;
    }
    if (month == 4){
        cout << "30 days" << endl;

    }
    if (month == 5){
        cout << "31 days" << endl;
    }
    if (month == 6) {
        cout << "30 days" << endl;
    }
    if (month == 7){
        cout << "31 days" << endl;
    }
    if (month == 8){
        cout << "31 days" << endl;
    }
    if (month == 9){
        cout << "30 days" << endl;
    }
    if (month == 10) {
        cout << "31 days" << endl;
    }
    if (month == 11){
        cout << "30 days" << endl;
    }
    if (month == 12) {
        cout << "31 days" << endl;
    }

    return 0;
}