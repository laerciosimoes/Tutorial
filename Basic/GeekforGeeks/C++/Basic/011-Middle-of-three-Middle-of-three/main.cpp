#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <algorithm>
using namespace std;

ifstream fin("input.txt");
#define cin fin

void split(const string &str, vector<string> &v)
{
	stringstream ss(str);
	ss >> noskipws;
	string field;
	char ws_delim;
	while (1)
	{
		if (ss >> field)
			v.push_back(field);
		else if (ss.eof())
			break;
		else
			v.push_back(string());
		ss.clear();
		ss >> ws_delim;
	}
}

void printMiddle(int num1, int num2, int num3)
{
	vector<int> myVector;
	myVector.push_back(num1);
	myVector.push_back(num2);
	myVector.push_back(num3);

	sort(myVector.begin(), myVector.end());
	// Get Second Line
	std::vector<int>::iterator it = myVector.begin(); 
	it++;
	std::cout << ' ' << *it << endl;
}

int main()
{
	string line;
	getline(cin, line);
	int numLines = atoi(line.c_str());
	for (int i = 0; i < numLines; i++)
	{
		getline(cin, line);
		vector<string> v;
		split(line, v);
		int num1 = atoi(v[0].c_str());
		int num2 = atoi(v[1].c_str());
		int num3 = atoi(v[2].c_str());
		printMiddle(num1, num2, num3);
	}

	return 1;
}