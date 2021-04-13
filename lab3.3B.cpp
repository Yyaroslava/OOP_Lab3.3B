// lab3.3B.cpp
#include <iostream>
#include "LongLong.h"

int main() {
    LongLong A, B;

    cout << "Enter the first numbers " << endl;
    cin >> A;

    cout << "Enter the second numbers " << endl;
    cin >> B;

    cout << "A + B: " << endl;
    cout << A + B << endl;

    cout << "A * B: " << endl;
    cout << A * B << endl;

    cout << "A > B " << endl;
    if (A > B) {
        cout << "Yes " << endl;
    }
    else cout << "No " << endl;

    cout << "A < B " << endl;
    if (A < B) {
        cout << "Yes " << endl;
    }
    else cout << "No " << endl;

    cout << "A == B " << endl;
    if (A == B) {
        cout << "Yes " << endl;
    }
    else cout << "No " << endl;

    cout << "A++ " << endl; cout << A++ << endl;
    cout << "A-- " << endl; cout << A-- << endl;
    cout << "++A " << endl; cout << ++A << endl;
    cout << "--A " << endl; cout << --A << endl;

    return 0;
}
