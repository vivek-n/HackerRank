#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    vector<int> vn(t);

    for (int i = 0; i < t; i++) {
        vector<int> vi(2);
        cin >> vi[0] >> vi[1];
        int numSquares = 0;

        for (long long j = 1; j <= sqrt(vi[1]); j++){
            long long sqr = j * j;
            
            if ((sqr >= vi[0]) && (sqr <= vi[1])) {
                numSquares++;
            }
        }

        vn[i] = numSquares;
    }

    for (int i = 0; i < t; i++) {
        cout << vn[i] << endl;
    }

    return 0;
}
