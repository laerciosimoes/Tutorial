#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

ifstream fin("input.txt");
#define cin fin


void printNum(int number) {
    if(number > 0) {
        printNum(number - 1);
        if(number > 1) {
            cout << " ";
        }
        cout << number;
    }
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
		printNum(myNum);
        cout << endl;
	}
	
	return 1;
}