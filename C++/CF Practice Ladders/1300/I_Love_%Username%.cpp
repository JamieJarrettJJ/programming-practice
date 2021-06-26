//https://codeforces.com/problemset/problem/155/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> c;
int n, i, p, a = 0;

int main() {
    cin >> n;

    for (i=0; i<n; i++) {
        cin >> p; 
        c.push_back(p);

        int min = *min_element(begin(c), end(c));
        int max = *max_element(begin(c), end(c));

        if (i != 0 && (c[i] == max || c[i] == min)) {
            a++;
        }

        if ((c[i] == max || c[i] == min) && find(c.begin(), c.end(), c[i]) != c.end()-1) {
            a--;
        }
    }

    cout << a;
}