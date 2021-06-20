//https://codeforces.com/problemset/problem/263/A

#include <iostream>

using namespace std;

int moves(int x, int y);

int main() {
    int matrix[5][5];
    int row;
    int col;

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cin >> matrix[i][j];
            if(matrix[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    cout << moves(row, col);
}

int moves(int x, int y) {
    int sum = 0;

    if(x>=2) {
        sum += (x-2);
    }else {
        sum += (2-x);
    }

    if(y>=2) {
        sum += (y-2);
    }else {
        sum += (2-y);
    }

    return sum;
}