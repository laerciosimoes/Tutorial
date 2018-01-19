#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

using namespace std;

ifstream fin("input.txt");
#define cin fin

double sumGP(int N, int a, int d) {
    if(d == 1) {
        return N*a;
    } else {
        return a*(pow(d,N)-1) / (d-1);
    }
}

int main() {
    int T, N, a, d = 0;
    cin >> T;
    for(int i =0; i < T;i++) {
        cin >> N;
        cin >> a >> d;
        cout << setprecision(20) << sumGP(N,a,d) << endl;
    }
    return 1;
}