#include <iostream>

using namespace std;

int main()
{
    int sally[2][3] = {{2,3,4},{8,9,10}};

    // 2,3,4
    // 8,9,10

    cout << sally[0][2] << endl;

    // 2,3,[4]
    // 8,9,10

    cout << sally[1][0] << endl;

    // 2,3,4
    // [8],9,10
}