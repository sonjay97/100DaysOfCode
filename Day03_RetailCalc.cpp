#include <iostream>
using namespace std;

const float HALF = 0.5, MEMBER_DISCOUNT = 0.9, HUNDRED = 100;

int main() {

    double firstItemPrice, secondItemPrice, basePrice;
    double subTotal, netTotal, taxRate, tax;
    char clubMember;

    cout << "Enter price of first item: " << endl;
    cin >> firstItemPrice;
    cout<< "Enter price of second item: " << endl;
    cin >> secondItemPrice;
    cout << "Does customer have a club card? (Y/N): " << endl;
    cin >> clubMember;
    cout << "Enter tax rate, e.g., 5.5 for 5.5% tax: " << endl;
    cin >> taxRate;

    basePrice = (firstItemPrice + secondItemPrice);

    if (firstItemPrice > secondItemPrice) {
        subTotal = (firstItemPrice + (secondItemPrice * HALF));
    } else {
        subTotal = ((firstItemPrice * HALF) + secondItemPrice);
    }

    if (clubMember == 'Y' || clubMember == 'y'){
        subTotal *= MEMBER_DISCOUNT;
    }

    taxRate /= HUNDRED;
    tax = (subTotal * taxRate);
    netTotal = subTotal + tax;

    cout << "Base Price: " << basePrice << endl;
    cout << "Price after discounts: " << subTotal << endl;
    cout << "Total price: " << netTotal << endl;

    return 0;
}
