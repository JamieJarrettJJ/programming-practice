//https://codeforces.com/problemset/problem/249/A

 #include <iostream>
 #include <vector>

 using namespace std;

 int main() {
    int n, i, l, r, t = 0, lo = 0, lc = 0, ro = 0, rc = 0;
    vector<int> left;
    vector<int> right;

    cin >> n;

    for (i=0; i<n; i++) {
        cin >> l >> r;

        left.push_back(l);
        right.push_back(r);

        if (left[i] == 1) {
            lo++;
        }else {
            lc++;
        }

        if (right[i] == 1) {
            ro++;
        }else {
            rc++;
        }
    }

    if ((lo + ro) == (n*2)-1) {
        t++;
    }else if (lo > ro) {
        for (i=0; i<n; i++) {
            if (left[i] == 0) {
                t++;
            }

            if (right[i] == 1) {
                t++;
            }
        }
    }else if (ro > lo) {
        for (i=0; i<n; i++) {
            if (right[i] == 0) {
                t++;
            }

            if (left[i] == 1) {
                t++;
            }
        }
    }else if ((lo == n && ro == n) || (lc == n && rc == n)) {
        t = 0;
    }else {
        t = 2*(n-lo);
    }

    cout << t;
 }