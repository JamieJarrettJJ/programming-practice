#include <iostream>

using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main()
{
    int jamie = 20;
    int john = 13;

    passByValue(jamie);
    passByReference(&john);

    cout << "Jamie is " << jamie << endl;
    cout << "John is " << john << endl;

}

void passByValue(int x)
{
    x = 99;
}

void passByReference(int *x)
{
    *x = 66;
}