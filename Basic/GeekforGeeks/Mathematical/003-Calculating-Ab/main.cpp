#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>

using namespace std;

ifstream fin("input.txt");
#define cin fin

int main() {
    int lines = 0;
    cin >> lines;
    for(int i = 0; i < lines; i++) {
        int num1, num2 = 0;
        cin >> num1 >> num2;
        cout << setprecision(20) << pow(num1,num2) << endl;
    }
    return 1;
}