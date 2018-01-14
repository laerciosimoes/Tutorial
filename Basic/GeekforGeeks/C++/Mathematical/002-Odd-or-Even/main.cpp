#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("input.txt");
#define cin fin


string OddOrEven(int myNum) {
    if(myNum%2 == 0) {
        return "even";
    } else {
        return "odd";
    }
}


int main() {
    int numLines = 0;
    cin >> numLines;
    for(int i = 0; i < numLines;i++) {
        int myNum = 0;
        cin >> myNum;
        cout << OddOrEven(myNum) << endl;
    }
}