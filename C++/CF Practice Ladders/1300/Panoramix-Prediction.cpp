//https://codeforces.com/problemset/problem/80/A

#include <iostream>

using namespace std;

bool isPrime(int n);
bool isNextPrime(int n, int m);

int main() {
    int n, m;

    cin >> n >> m;

    if(isNextPrime(n, m)) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}

bool isPrime(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

bool isNextPrime(int n, int m) {
    for(int i = n+1; i<=m; i++) {
        if(isPrime(i) && i == m) {
            return true;
        }else if(isPrime(i) && i != m) {
            break;
        }
    }
    return false;
}