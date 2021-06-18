#include <iostream>

using namespace std;

void printArray(int Array[], int arraySize);

int main()
{
    int bucky[3] = {20,54,675};
    int jessica[6] = {54,24,7,8,9,99};

    printArray(jessica, 3);
}

void printArray(int Array[], int arraySize)
{
    for(int x=0; x<arraySize; x++) {
        cout << Array[x] << endl;
    }
}