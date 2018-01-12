#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

ifstream fin("input.txt");
#define cin fin

void convert10tob(int N, int b)
{
     if (N == 0)
        return;
     int x = N % b;
     N /= b;
     if (x < 0)
        N += 1; 
     convert10tob(N, b);
     cout<< (x < 0) ? (x + (b * -1)) : x;
     return;
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
		convert10tob(myNum, myBase);
		cout << endl;
	}
	
	return 1;
}