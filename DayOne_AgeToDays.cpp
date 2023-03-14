#include <iostream>
using namespace std;

int calculateAgeInDays(int);

const int DAYS_IN_YEAR = 365;

int main() {

    int years;
    cout << "How old are you? (Input years): ";
    cin >> years;

    cout << "Your age in days is: " << calculateAgeInDays(years);


}

int calculateAgeInDays(int years){

    int days;

    days = years * DAYS_IN_YEAR;

    return days;

}