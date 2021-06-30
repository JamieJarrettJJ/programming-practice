//https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string>

using namespace std;

string s;
int i;

int main() {
    
    cin >> s;

    while (true) {
        if (i == s.length()-1) {
            break;
        }else if (s[i] > s[i+2]) {
            swap(s[i], s[i+2]);
            i = 0;
        }else {
            i += 2;
        }
    }

    cout << s << endl;
}