#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

inline int min(int a, int b) { return (a>b) ? b : a; }

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for (int c_i = 0; c_i < m; c_i++) {
        cin >> c[c_i];
    }

    vector<int> vdist(n);
    for (int i = 0; i < n; i++) {
        vdist[i] = 0xFFFFF;
    }

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (i == c[j]) {
                vdist[i] = 0;

                break;
            }

            else {
                vdist[i] = min(vdist[i], abs(i - c[j]));
            }
        }
    }

    /*cout << "vdist is: ";
    for (int i = 0; i<n; i++) {
        cout << vdist[i] << " ";
    }
    cout << endl;*/

    int max = 0;
    for (int i = 0; i<n; i++) {
        if (max < vdist[i]) {
            max = vdist[i];
        }
    }

    cout << max << endl;

    return 0;
}
