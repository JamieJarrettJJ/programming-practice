#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream File("Files/players.txt");

    int id;
    string name;
    double money;

    while(File >> id >> name >> money) {
        cout << id << ", " << name << ", " << money << endl;
    }
}