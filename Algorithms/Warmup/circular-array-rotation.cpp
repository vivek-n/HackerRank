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

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = a;
}

int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    vector<int> vq;
    vector<int> temp;
    
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        vq.push_back(m);
    }
    
    //TODO: one test case is failing; need to check
    if (n > k) {
        for (int i = (n - k) % n; i < n; i++) {
            temp.push_back(a[i]);
        }
        for (int i = 0; i< (n - k)%n; i++) {
            temp.push_back(a[i]);
        }
    }

    else {
        for (int i = (k - n) % n; i < n; i++) {
            temp.push_back(a[i]);
        }
        for (int i = 0; i < (k - n) % n; i++) {
            temp.push_back(a[i]);
        }
    }
    
    for(int i=0; i<q; i++){
        cout << temp[vq.at(i)] << endl;
    }
        
    return 0;
}
