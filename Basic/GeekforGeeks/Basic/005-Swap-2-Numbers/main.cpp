#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <sstream>

using namespace std;

ifstream fin("input.txt");
#define cin fin

void split(const string& str, vector<string>& v) {
  stringstream ss(str);
  ss >> noskipws;
  string field;
  char ws_delim;
  while(1) {
    if( ss >> field )
      v.push_back(field);
    else if (ss.eof())
      break;
    else
      v.push_back(string());
    ss.clear();
    ss >> ws_delim;
  }
}

void swapNumbers(int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

int main()
{
	string line;
    getline(cin,line);
    int numLines = atoi(line.c_str());
    for(int i = 0; i < numLines; i++) 
	{
	    getline(cin,line);
        
        vector<string> v;
        split(line, v);
        int num1 = atoi(v[0].c_str());
        int num2 = atoi(v[1].c_str());

	    swapNumbers(&num1,&num2);
      cout << num1  << " " << num2 << endl;
	}
	
	return 1;
}