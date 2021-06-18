#include <iostream>
#include "TheShit.h"

using namespace std;

TheShit::TheShit()
{

}

TheShit::TheShit(int a)
{
    num = a;
}

TheShit TheShit::operator+(TheShit shit)
{
    TheShit brandNew;
    brandNew.num = num + shit.num;
    return(brandNew);
}