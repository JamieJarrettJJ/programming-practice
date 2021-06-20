//https://codeforces.com/contest/69/problem/A

#include <iostream>

using namespace std;

int main() {
    int n;
    int xSum = 0;
    int ySum = 0;
    int zSum = 0;

    cin >> n;

    for(int i=0; i<n;i++) {
        int x;
        int y;
        int z;

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