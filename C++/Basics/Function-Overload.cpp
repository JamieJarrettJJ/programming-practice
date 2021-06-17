#include <iostream>

using namespace std;

void printNumber(int x) {
    cout << "Integer: " << x << endl;
}

void printNumber(float x) {
    cout << "Float: " << x << endl;
}

int main()
{
    int a = 54;
    float b = 32.4896;

    printNumber(a);
    printNumber(b);
}