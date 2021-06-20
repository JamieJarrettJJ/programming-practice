//https://codeforces.com/problemset/problem/281/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    string w;

    cin >> w;

    for(int i=0;i<w.length();i++) {
        if(i==0) {
            w[i] = toupper(w[i]);
        }
    }

    cout << w << endl;
}