#include <iostream>

using namespace std;

int main()
{
    int age = 178;

    if(age>60) {
        cout << "You're pretty old mate" << endl;
        if (age>100) {
            cout << "You should be dead" << endl;
        }
    }else {
        cout << "You're pretty young mate" << endl;
    }
}