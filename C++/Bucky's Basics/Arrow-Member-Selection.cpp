#include <iostream>
#include "Sally/Sally.cpp"  
	
using namespace std;

int main()
{
    Sally Object;
    Sally *sallyPointer = &Object;

    Object.printCrap();
    sallyPointer->printCrap();
}