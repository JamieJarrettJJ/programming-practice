#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int number;
    int total = 0;

    while(x <= 5) {
        cout << "Enter a number: ";
        cin >> number;
        total = total + number;
        x++;
    }

    cout << "Sum of all numbers: " << total << endl;

    return 0;
}