#include <iostream>
#include "TheShit/TheShit.cpp"

using namespace std;

int main()
{
    TheShit a(34);
    TheShit b(54);
    TheShit c;

    c = a + b;
    cout << a.num << " + " << b.num << " = " << c.num << endl;
}