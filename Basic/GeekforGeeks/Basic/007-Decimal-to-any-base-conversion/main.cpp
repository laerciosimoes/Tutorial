#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

ifstream fin("input.txt");
#define cin fin

string to_base(int number, int base ) {
    string bases = "0123456789ABCDEF";
    string result = "";
    while(number > 0) {
        result = bases[number%base] + result;
        number /= base;
    }
    return result;
}


int main()
{
	string line;
    getline(cin,line);
    int numLines = atoi(line.c_str());
    for(int i = 0; i < numLines; i++) 
	{
	    getline(cin,line);
	    int myBase = atoi( line.c_str());
	    getline(cin,line);
	    int myNum = atoi( line.c_str());
		cout << to_base(myNum, myBase) << endl;
	}
	
	return 1;
}