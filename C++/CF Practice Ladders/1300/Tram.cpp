//https://codeforces.com/problemset/problem/116/A

#include <iostream>

using namespace std;

int main() {
    int n, i, p = 0, a, b, l = 0;

    cin >> n;

    for (i=0; i<n; i++) {
        cin >> a >> b;

        l = (l-a)+b;
        
        if (l >= p) {
            p = l;
        }
    }

    cout << p << endl;
}