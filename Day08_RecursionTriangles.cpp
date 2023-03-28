#include <iostream>
using namespace std;

void printTriangle(int);
void pattern(int);
void printOppositeTriangles(int);
void printRuler(int);

int main() {

    int input;
    cout << "Enter a positive integer: \n";
    cin >> input;

    pattern(input);
    cout << "-----Part 2----\n"; //space from previous triangle
    printOppositeTriangles(input);
    cout << "-----Part 3----\n"; //space from previous triangle
    printRuler(input);
    
    return 0;

}

void printTriangle(int n){

    if (n > 0){
        printTriangle(n - 1);
        cout << "*";
    }
}

void pattern(int n){
    if(n > 0){

        pattern(n -1);
    }

    printTriangle(n);
    cout << "\n";

}

void printOppositeTriangles(int n){

    

    for(int i = 0; i < n; i++){

        cout << "*";

    }
    cout << "\n";
    if(n > 1){
        printOppositeTriangles(n - 1);
    }
    for(int i = 0; i < n; i++){

        cout << "*";

    }
    cout << "\n";

}

void printRuler(int n){

    if (n == 1){
        cout << "-" << endl;
    } else {

        printRuler(n - 1);
        for(int i = 0; i < n; i++){

            cout << "-";
        }
        cout << endl;
        printRuler(n - 1);

    }

}
