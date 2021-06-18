#include "Jeff.h"
#include <iostream>

using namespace std;

void Jeff::printShiz()
{
    cout << "I am a regular function" << endl;
}

void Jeff::printShiz2() const
{
    cout << "I am the constant function" << endl;
}