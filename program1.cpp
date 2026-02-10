#include <iostream>
using namespace std;

int main() {
    int intNumber = 25;
    float floatNumber = 3.14159f;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'A';

    cout << "value of integer " << intNumber << " size " << sizeof(intNumber) << endl;
    cout << "value of float " << floatNumber << " size " << sizeof(floatNumber) << endl;
    cout << "value of double " << doubleNumber << " size " << sizeof(doubleNumber) << endl;
    cout << "value of char " << charName << " size " << sizeof(charName) << endl;
    cout << "value of bool " << boolean << " size " << sizeof(boolean) << endl;

    return 0;
}
