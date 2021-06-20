//https://codeforces.com/problemset/problem/32/B

#include <iostream>
#include <string>

using namespace std;

int main() {
    string b; //Borze alphabet
    string d; //Decoded

    cin >> b;

    for(int i=0;i<b.size();i++) {
        if(b[i] == '-' && b[i+1] == '.') {
            d.append("1");
            i++;
        }else if(b[i] == '-' && b[i+1] == '-') {
            d.append("2");
            i++;
        }else {
            d.append("0");
        }
    }

    cout << d << endl;
}