#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

ifstream fin("input.txt");
#define cin fin


int reverseNumber(int num) {
    int result = 0;
    int nextNum = 0;
    int i = 10;
    do
    {
        int myData =  (num  % i) /  (i / 10);
        result = nextNum + myData;
        nextNum = result * 10;
        i *= 10;
    } while ((num * 10 / i) != 0);
    return result;
}


void isPalimdrome(int number) {
    if(number == reverseNumber(number)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;        
    }
}


int main() { 
    string line;
    getline(cin, line);
    int numLines = atoi(line.c_str());
    for(int i = 0; i < numLines; i++){
       getline(cin, line);
       isPalimdrome(atoi(line.c_str())); 
    }
}