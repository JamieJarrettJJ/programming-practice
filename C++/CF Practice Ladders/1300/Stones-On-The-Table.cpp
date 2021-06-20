//https://codeforces.com/problemset/problem/266/A

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n; //number of stones on the table
    string s; //colors of the stones
    int m = 0; //minimum stones to take

    cin >> n;
    cin >> s;

    for(int i=0;i<n;i++) {
        if(s[i] == s[i+1]) {{
            m += 1;
        }}
    }

    cout << m << endl;
}