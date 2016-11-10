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
    vector<long long> poison(t);

    for (int i = 0; i < t; i++) {
        long long n, m, s;

        cin >> n >> m >> s;

        poison[i] = (s - 1 + m) % n;

        if (poison[i] == 0) {
            poison[i] = n;
        }
    }

    for (int i = 0; i < t; i++) {
        cout << poison[i] << endl;
    }

    return 0;
}
