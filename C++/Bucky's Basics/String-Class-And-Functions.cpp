#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "thisisatest\n";

    //Prints out string
    for(int x=0; x<s1.length(); x++) {
        cout << s1[x];
    }

    //^Above function is the same as below
    cout << s1 << endl;
}