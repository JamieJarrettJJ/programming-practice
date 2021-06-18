#include "People.hpp"  
#include "Birthday.hpp"
#include <iostream>

using namespace std;
	
People::People(string x, Birthday bo)
: name(x), DOB(bo)
{
	
}

void People::printInfo()
{
    cout << name << " was born on: ";
    DOB.printDate();
}