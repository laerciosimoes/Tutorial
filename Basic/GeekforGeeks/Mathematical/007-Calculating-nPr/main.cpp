#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


ifstream fin("input.txt");
#define cin fin


double factorial(int num) {
    if(num <= 1) return 1;
    return factorial(num - 1) * num;
}

double nPr(int n, int r) {
    int diff = n - r;
    double num1 = 1;
    double num2  =0;
    int i = n;
    num2 = factorial(diff);
    do {
        num1 *=  i;
        i--;
    } while (i > diff);
    num1 *= num2;
    return num1 / num2;
}

int main() {
	//code
	int numLines = 0;
    string line;
    
    cin >> numLines ;
	for(int i = 0; i < numLines; i++) {
	    int n, r = 0;
	     
        cin >> n >> r ;
  
	    cout << setprecision(20) << nPr(n,r) << endl;
	}
	return 0;
}