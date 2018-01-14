#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ifstream fin("input.txt");
#define cin fin

int isPerfectSquare(int myNum) { 
    int result = (int) sqrt(myNum);
    return (result * result) == myNum;
}

int main() {
    int numLines = 0;
    cin >> numLines;
    for(int i =0; i < numLines; i++) {
        int myNum = 0;
        cin >> myNum;
        cout << isPerfectSquare(myNum) << endl;
    }
    return 1;
}