#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream File("Files/players.txt");

    cout << "Enter player ID, name and money" << endl;
    cout << "Press Ctrl+Z to quit\n" << endl;

    int idNumber;
    string name;
    double money;

    while(cin >> idNumber >> name >> money) {
        File << idNumber << ' ' << name << ' ' << money << endl;
    }
}