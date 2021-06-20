//https://codeforces.com/problemset/problem/61/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b;

    int i;
    for(i=0; i<a.length();i++) {
        if(a[i] == b[i]) {
            c.append("0");
        }else {
            c.append("1");
        }
    }

    cout << c << endl;
}