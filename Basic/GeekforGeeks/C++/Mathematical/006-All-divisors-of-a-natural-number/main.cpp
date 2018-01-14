#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ifstream fin("input.txt");
#define cin fin

void getDivisors(int myNum) { 
    int len = (int) myNum/2;
    cout << "1";
    for(int i = 2; i <= len; i++){
        if((myNum % i) == 0) {
            cout << " " << i;
        }
    }
    cout << " " << myNum << endl;
}

int main() {
    int numLines = 0;
    cin >> numLines;
    for(int i =0; i < numLines; i++) {
        int myNum = 0;
        cin >> myNum;
        getDivisors(myNum) ;
        
    }
    return 1;
}