//https://codeforces.com/problemset/problem/148/A

#include <iostream>

using namespace std;

int main() {
    int k, l, m, n, x, i = 0, damaged = 0;
    cin >> k >> l >> m >> n >> x;

    for(i=1; i<=x; i++) {
        bool a = (i%k == 0), b = (i%l == 0), c = (i%m == 0), d = (i%n == 0);

        if (a || b || c || d) {
            damaged += 1;
        }
    }

    cout << damaged;
}