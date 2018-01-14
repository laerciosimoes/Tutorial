#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

ifstream fin("input.txt");
#define cin fin


int celsius_to_Fahreneit(int number) {
    double result = number * 1.8 + 32;
    return (int)result;
}

int main()
{
	string line;
    getline(cin,line);
    int numLines = atoi(line.c_str());
    for(int i = 0; i < numLines; i++) 
	{
	    getline(cin,line);
	    int myNum = atoi( line.c_str());
		cout << celsius_to_Fahreneit(myNum) << endl;
	}
	
    
	return 1;
}