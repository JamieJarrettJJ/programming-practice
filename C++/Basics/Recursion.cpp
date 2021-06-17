#include <iostream>

using namespace std;

int findFactorial(int x)
{
    if (x==1) {
        return 1;
    }else {
        return x*findFactorial(x-1);
    }
}

int main()
{
    cout << findFactorial(5) << endl;
}