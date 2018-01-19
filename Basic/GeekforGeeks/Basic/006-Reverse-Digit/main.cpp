#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

ifstream fin("input.txt");
#define cin fin

void reverse(int num)
{
    double maxNumber = (double)num * 10;
    double i = 10;
    bool hasValue = false;
    do
    {
        int myData1 =  (num % (int)i) ;
        int myData2 =   (i / 10);
        int myData =  myData1 / myData2;
       
        if(!hasValue) {
            if(myData > 0) {
                hasValue = true;
                cout << myData;            
            }
        } else { 
            cout << myData;
        }

        i *= 10;
    } while ((int)(maxNumber / i) != 0);
}
int main()
{
    string line;
    getline(cin, line);
    int numLines = atoi(line.c_str());
    for (int i = 0; i < numLines; i++)
    {
        getline(cin, line);
        int myNum = atoi(line.c_str());
        reverse(myNum);
        cout << endl;
    }

    return 1;
}