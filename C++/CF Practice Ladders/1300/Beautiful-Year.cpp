//https://codeforces.com/problemset/problem/271/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    int y;
    bool found = false;

    cin >> y;

    while(found == false) {
        bool u1, u2, u3;

        y += 1;

        string s = to_string(y);

        u1 = s[0] != s[1] && s[0] != s[2] && s[0] != s[3];
        u2 = s[1] != s[2] && s[1] != s[3];
        u3 = s[2] != s[3];

        if(u1 && u2 && u3) {
            found = true;
        }
    }

    cout << y;
}