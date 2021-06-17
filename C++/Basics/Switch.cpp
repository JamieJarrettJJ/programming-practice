#include <iostream>
#include <cmath>

using namespace std;

int	main()
{
    int age = 21;

    switch(age) {
        case 16:
            cout << "You can drive now" << endl;
            break;
        case 18:
            cout << "You can drink now" << endl;
            break;
        case 21:
            cout << "You can drink in America now" << endl;
            break;
        default:
            cout << "Sorry you get nothing";
    }
}
