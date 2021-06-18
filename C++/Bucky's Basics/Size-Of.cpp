#include <iostream>

using namespace std;

int main()
{
    double jamie[10];
    cout << sizeof(jamie) << endl;
    cout << sizeof(jamie) / sizeof(jamie[0]) << endl;
    cout << sizeof(jamie[0]);
}
