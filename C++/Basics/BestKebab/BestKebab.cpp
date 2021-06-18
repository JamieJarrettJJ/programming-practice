#include <iostream>
#include "BestKebab.h"

using namespace std;

BestKebab::BestKebab(int num):h(num){}

void BestKebab::printCrap()
{
    cout << "h=" << h << endl;
    cout << "this->h=" << this->h << endl;
    cout << "(*this).h=" << (*this).h << endl;
}