#include <iostream>
using namespace std;

int main() {
    int a = 189;
    char b = 'B';

    float x = a / 3.0f;
    int decB = (int)b;           
    float y = (a + b) / 5.0f;    
    char z = (char)(b + (a / 10 - 1));

    cout << x << " " << decB << " " << y << " " << z << endl;
    return 0;
}
