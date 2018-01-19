#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream fin("input.txt");
#define cin fin

double factorial(int num) {
    if(num == 1) return 1;
    return factorial(num - 1) * num;
}

int main() {
	//code
	int numLines = 0;
    string line;
    
    cin >> numLines ;
	for(int i = 0; i < numLines; i++) {
	    int myNumber = 0;
	     
        cin >> myNumber ;
  
	    cout << setprecision(20) << factorial(myNumber) << endl;
	}
	return 0;
}