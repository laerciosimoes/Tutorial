#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream fin("input.txt");
#define cin fin

double sumAP(int N, int a, int d) {
    double sum  = 0;
    for(int i = 0; i < N; i++) {
        sum += a + (i*d);
    }
    return sum;
}

int main() {
    int T, N, a, d = 0;
    cin >> T;
    for(int i =0; i < T;i++) {
        cin >> N;
        cin >> a >> d;
        cout << setprecision(20) << sumAP(N,a,d) << endl;
    }
    return 1;
}