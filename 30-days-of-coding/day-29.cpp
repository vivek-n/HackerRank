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


int main() {
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {
        int n;
        int k;
        cin >> n >> k;

        int max_possible = -1;

        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if ((max_possible < (i&j)) && ((i&j) < k)) {
                    max_possible = i&j;
                }
            }
        }

        cout << max_possible << endl;
    }

    return 0;
}
