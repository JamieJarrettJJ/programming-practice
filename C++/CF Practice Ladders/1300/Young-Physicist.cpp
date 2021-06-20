//https://codeforces.com/contest/69/problem/A

#include <iostream>

using namespace std;

int main() {
    int n;
    int xSum, ySum, zSum;
    xSum = ySum = zSum = 0;

    cin >> n;

    for(int i=0; i<n;i++) {
        int x, y, z;

        cin >> x >> y >> z;

        xSum += x;
        ySum += y;
        zSum += z;
    }

    if(xSum == 0 && ySum == 0 && zSum == 0) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}