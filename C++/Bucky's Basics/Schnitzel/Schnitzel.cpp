#include "Schnitzel.h"
#include <iostream>

using namespace std;

Schnitzel::Schnitzel(int a, int b)
: regVar(a), constVar(b)
{
}

void Schnitzel::print()
{
    cout << "Regular var is: " << regVar << "\nConst variable is: " << constVar << endl;
}