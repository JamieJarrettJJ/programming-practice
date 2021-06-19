//https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string s;
    int u = 0; //Uppercase sum
    int l = 0; //Lowercase sum

    cin >> s;

    for(int i=0;i<s.length();i++) {
        if(isupper(s[i])) {
            u += 1;
        }else {
            l += 1;
        }
    }

    if(u > l) {
        for(int i=0;i<s.length();i++) {
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
    }else {
        for(int i=0;i<s.length();i++) {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
}