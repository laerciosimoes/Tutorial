#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <iterator>
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

vector<int> calculateData(int num1, int num2) {
    vector<int> result;
    // First Line:  Result of addition of the two numbers
    result.push_back(num1 + num2);
    // Second Line: Result of subtracting the smaller number from the greater number.
    if(num1 > num2) {
        result.push_back(num1 - num2);
    } else { 
        result.push_back(num2 - num1);
    }
    // Third Line: Result of dividing greater number by the smaller number (Result will be in integer)
    if(num1 > num2) {
        result.push_back(int(num1 / num2));
    } else { 
        result.push_back(int(num2 / num1));
    }
    // Fourth Line: Result of multiplication of the two numbers. 
    result.push_back(num1 * num2);
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
        vector<string> v;
        split(line, v);
        int num1 = atoi(v[0].c_str());
        int num2 = atoi(v[1].c_str());

        vector<int> r = calculateData( num1,  num2);
        copy(r.begin(), r.end(), ostream_iterator<int>(cout, "\n"));
	}
	
	return 1;
}