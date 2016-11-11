#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//TODO: able to pass 11/15 test case; pass other test cases too

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
    vector<vector<long long>> diff(k);

    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        diff[a[i] % k].push_back(a[i]);
    }

    if (k == 1) {
        cout << 1 << endl;

        return 0;
    }

    for (long long i = 1; i <= k / 2; i++) {
        if ((i % 2 == 0) && (k%2 == 0)
            && (k%i == 0)) {
            diff[i].clear();
            diff[i].push_back(i);
        }

        for (int j = k; j > k / 2; j--) {
            if ((i + j == k) && (j<k)) {
                if ((diff[i].size() == 0) ||
                    (diff[j].size() == 0)) {
                    continue;
                }

                if (diff[i].size() < diff[j].size()) {
                    diff[i].clear();
                }
                else {
                    diff[j].clear();
                }
            }
        }
    }

    long long sum = 0;
    if (diff[0].size() >= 1) {
        sum += 1;
    }

    for (long long i = 1; i < k; i++) {
        sum += diff[i].size();
    }

    cout << sum << endl;

    return 0;
}
