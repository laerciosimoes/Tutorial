#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

ifstream fin("input.txt");
#define cin fin

int base_to(string number, int base ) {
    string bases = "0123456789ABCDEF";
    int result = 0;
    int power = 1;
    for (std::string::reverse_iterator rit=number.rbegin(); rit!=number.rend(); ++rit) {
        int found = bases.find(*rit);
        result += found * power;
        power = power * base;
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
	    string myNum = line;
		cout << base_to(myNum, myBase) << endl;
	}
	
	return 1;
}