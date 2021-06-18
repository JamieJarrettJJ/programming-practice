#include <iostream>

using namespace std;

int main()
{
    int jamie[5];
    int *bp0 = &jamie[0];
    int *bp1 = &jamie[1];
    int *bp2 = &jamie[2];

    cout << "bp0 is at " << bp0 << endl;
    cout << "bp1 is at " << bp1 << endl;
    cout << "bp2 is at " << bp2 << endl;

    bp0++;

    cout << "bp0 is now at " << bp0 << endl;
}