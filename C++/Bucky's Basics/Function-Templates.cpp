#include <iostream>

using namespace std;

template <class yoy>

yoy addCrap(yoy a, yoy b) {
    return a+b;
}

int main() {
    int x=7.65, y=43, z;
    z = addCrap(x,y);
    cout << z << endl;
}