#include <iostream>

using namespace std;

int addNumbers(int x, int y) {
    int answer = x + y;
    return answer;
}

int main()
{
    cout << "Sum of numbers: " << addNumbers(100, 10) << endl;
    return 0;
}