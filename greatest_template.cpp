#include <iostream>
using namespace std;

template <class T>
T largest(T arg1, T arg2) {
    if (arg1 > arg2) {
        cout << "The largest argument is " << arg1 << endl;
        return arg1;
    } else {
        cout << "The largest argument is " << arg2 << endl;
        return arg2;
    }
}

int main() {
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    largest(int1, int2);

    float float1, float2;
    cout << "Enter two floats: ";
    cin >> float1 >> float2;
    largest(float1, float2);

    char char1, char2;
    cout << "Enter two characters: ";
    cin >> char1 >> char2;
    largest(char1, char2);

    return 0;
}
