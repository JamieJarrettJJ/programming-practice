//https://codeforces.com/problemset/problem/275/A

#include <iostream>
#include <string>

using namespace std;

int g[3][3];

void modify(int i, int j, int x);

int main() {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            int x;
            cin >> x;
            modify(i, j, x);
        }
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(g[i][j] % 2 == 0) {
                cout << "1";
            }else {
                cout << "0";
            }
        }
        cout << endl;
    }
}

void modify(int i, int j, int x) {
    g[i][j] += x;

    if(j + 1 < 3) {
        g[i][j+1] += x;
    }
    if(j - 1 > -1) {
        g[i][j-1] += x;
    }
    if(i + 1 < 3) {
        g[i+1][j] += x;
    }
    if(i - 1 > -1) {
        g[i-1][j] += x;
    }
}