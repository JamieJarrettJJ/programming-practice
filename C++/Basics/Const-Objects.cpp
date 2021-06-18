#include <iostream>
#include "Jeff/Jeff.cpp"

using namespace std;

int main()
{
    Jeff regObj;
    regObj.printShiz();

    const Jeff constObj;
    constObj.printShiz2();
}