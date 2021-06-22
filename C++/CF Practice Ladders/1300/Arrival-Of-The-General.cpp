//https://codeforces.com/contest/144/problem/A

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int maxValue = 0;
    int minValue = 1000;
    int maxIndex = 0;
    int minIndex=0;

    //Gets user input and stores it as n (number of soldiers)
    cin >> n;

    for(int i=0;i<n;i++) {
        int x;

        //Gets user input and stores it as x (height of soldier)
        cin >> x;

        //Loops through n numbers to find max value
        if(x>maxValue) {
            maxIndex = i;
            maxValue = x;
        }

        //Loops through n numbers to find min value
        if(x<=minValue) {
            minIndex = i;
            minValue = x;
        }
    }

    //If the max value is higher in the sequence ...
    if(maxIndex>minIndex) {
        //maxIndex - 1 = Counting moves for the maximum value
        //n - minIndex = Counting moves for the minimum value
                                         //take 1 away to account for the swap between the highest and the lowest value
        cout << (maxIndex-1)+(n-minIndex)-1 << endl;;

    }else {
        cout << (maxIndex-1)+(n-minIndex);
    }
}