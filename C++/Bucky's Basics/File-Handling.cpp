#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream buckysFile("Files/beefjerky.txt");

    if (buckysFile.is_open()) {
        cout << "File is open" << endl;
    }else {
        cout << "You fucked up" << endl;
    }

    buckysFile << "Beef is peng g";
    buckysFile.close();
}