#include <iostream>
using namespace std;

void printAddress(const int& x) {
    cout << "Inside function, x value = " << x << endl;
    cout << "Inside function, x address = " << &x << endl;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "In main, a address = " << &a << endl;
    printAddress(a);

    cout << endl;

    cout << "In main, b address = " << &b << endl;
    printAddress(b);

    return 0;
}
