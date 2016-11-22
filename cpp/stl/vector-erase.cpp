#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    vector<int> vi(n);
    for (int i = 0; i < n; i++) {
        cin >> vi[i];
    }

    int offset, begin, end;
    cin >> offset >> begin >> end;

    vi.erase(vi.begin() + offset - 1);
    vi.erase(vi.begin() + begin - 1, vi.begin() + end - 1);

    cout << vi.size() << endl;

    for (int i = 0; i < vi.size(); i++) {
        cout << vi[i] << " ";
    }

    return 0;
}
