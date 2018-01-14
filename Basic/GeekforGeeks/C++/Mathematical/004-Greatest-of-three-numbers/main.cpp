#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("input.txt");
#define cin fin
#define max(a,b)  (a>b?a:b)

int main() {
    int numLines = 0;
    cin >> numLines;
    for(int i = 0; i < numLines; i++) {
        int num1, num2, num3 = 0;
        cin >> num1 >> num2 >> num3;
        cout << max(max(num1,num2),num3) << endl;
    }
}