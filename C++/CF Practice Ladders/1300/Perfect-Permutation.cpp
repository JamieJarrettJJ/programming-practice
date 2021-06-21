//https://codeforces.com/problemset/problem/233/A

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> getPermutation(int n);
vector<int> makePerfect(vector<int> p);

int n, i;

int main() {
    cin >> n;

    vector<int> perm = getPermutation(n);
    vector<int> perf = makePerfect(perm);

    if (n % 2 != 0) {
        cout << -1;
    }else {
        for(i=0;i<perf.size();i++) {
            cout << perf[i] << " ";
        }
    }
}

vector<int> getPermutation(int n) {
    vector<int> p;
    for(i=1; i<=n; i++) {
        p.push_back(i);
    }
    return p;
}

vector<int> makePerfect(vector<int> p) {
    for(i=1; i<=n; i+=2) {
        swap(p[i-1],p[i]);
    }
    return p;
}