#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

ifstream fin("input.txt");
#define cin fin


void printText(int number) {
    for(int i = 0; i < number; i++) {
        cout << "GeeksforGeeks" << endl;
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
		printText(myNum);
	}
	
	return 1;
}