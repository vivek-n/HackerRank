#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int my_binary_search(vector<int>& vi, int num) {
    int low, mid, high;
    low = 0;
    high = vi.size();

    while (high >= low) {
        mid = (low + high) / 2;

        if (num < vi[mid]) {
            high = mid - 1;
        }

        else if (num > vi[mid]) {
            low = mid + 1;
        }

        else {
            while ((mid - 1 >= 0) && (vi[mid] == vi[mid - 1])) {
                mid--;
            }

            return mid;
        }
    }

    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    vector<int> vi(n);
    for (int i = 0; i < n; i++) {
        cin >> vi[i];
    }

    int q, num, index;
    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> num;

        index = my_binary_search(vi, num);

        if (index == -1) {
            int index2 = 0;

            for (int j = 0; j < n; j++) {
                if (num > vi[j]) {
                    continue;
                }

                else {
                    index2 = j;
                    break;
                }
            }
            cout << "No " << index2 + 1 << endl;
        }

        else {
            //index = find(vi.begin(), vi.end(), num) - vi.begin();
            cout << "Yes " << index + 1 << endl;
        }
    }

    return 0;
}
