#include <iostream>
#include "Composition/Birthday.cpp"
#include "Composition/People.cpp"

using namespace std;

int main()
{
    Birthday bObject(9,16,2000);

    People JamieJ("Jamie", bObject);
    JamieJ.printInfo();
}