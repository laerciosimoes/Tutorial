#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

ifstream fin("input.txt");
#define cin fin


string decision(int number) {
    if(number > 5) {
        return "Greater than 5";
    } else if (number < 5) {
       return "Less than 5";
    } else {
       return "Equal to 5";
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
		cout << decision(myNum) << endl;
	}
	
	return 1;
}