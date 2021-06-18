#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getWhatTheyWant();
void displayItems(int x);

//Main function
int main() {
    int whatTheyWant;

    whatTheyWant = getWhatTheyWant();

    while(whatTheyWant != 4) {
        switch(whatTheyWant) {
            case 1:
                displayItems(1);
                break;
            case 2:
                displayItems(2);
                break;
            case 3:
                displayItems(3);
                break;
        }
        whatTheyWant = getWhatTheyWant();
    }
}

//Get user input
int getWhatTheyWant() {
    int choice;

    cout << "1 - only plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program" << endl;

    cin >> choice;
    return choice;
}

//Display items function
void displayItems(int x) {
    ifstream objectFile("Files/objects.txt");

    string name;
    double power;

    switch(x) {
        case 1:
            while(objectFile >> name >> power) {
                if(power==0) {
                    cout << name << ' ' << power << endl;
                }
            };
        case 2:
            while(objectFile >> name >> power) {
                if(power>0) {
                    cout << name << ' ' << power << endl;
                }
            };
        case 3:
            while(objectFile >> name >> power) {
                if(power<0) {
                    cout << name << ' ' << power << endl;
                }
            };
    }
}