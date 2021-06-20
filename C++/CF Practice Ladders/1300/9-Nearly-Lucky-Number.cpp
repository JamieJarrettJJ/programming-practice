//https://codeforces.com/problemset/problem/110/A

#include <iostream>
#include <string>

using namespace std;

bool isLuckyNumber(int luckyNumber);

int main() {
    long double n;
    int l = 0;
    string s;

    cin >> n;
    s = to_string(n);

    for(int i=0; i<s.length();i++) {
        if(s[i] == '4' || s[i] == '7') {
            l += 1;
        }
    }

    if(isLuckyNumber(l)) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}

bool isLuckyNumber(int n) {
    string s = to_string(n);
    bool luckyNum;

    for(int i=0; i<s.length();i++) {
        if(s[i] != '7' && s[i] != '4') {
            luckyNum = false;
            break;
        }else {
            luckyNum = true;
        }
    }

    return luckyNum;
}