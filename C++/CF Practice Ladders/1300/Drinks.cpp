//https://codeforces.com/problemset/problem/201/B

#include <iostream>

using namespace std;

int main() {
    int i = 0;
    long double a = 0;
    int n;
    cin >> n;
    long double p[n] = {}; 
    for(i=0;i<n;i++) {
        cin >> p[i];
        a += p[i];
    }
    long double d = a/n;
    cout << d << endl;
}