#include <iostream>

using namespace std;

int main()
{
    int age;
    int ageTotal = 0;
    int numPeople = 0;

    cout << "Enter first person's age or -1 to quit:" << endl;
    cin >> age;

    while (age != -1) {
        ageTotal = ageTotal + age;
        numPeople++;

        cout << "Enter next person's age or -1 to quit:" << endl;
        cin >> age;
    }

    cout << "Number of people entered: " << numPeople << endl;
    cout << "Average age: " << ageTotal/numPeople << endl;

    return 0;
}