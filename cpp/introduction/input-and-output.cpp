#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[3], sum;
    vector<int> vn;
    
    cin >> a[0] >> a[1] >> a[2];
    vn.push_back(a[0]);
    vn.push_back(a[1]);
    vn.push_back(a[2]);
    
    for(int i=0; i<vn.size(); i++)
        sum += vn.at(i);
    
    cout << a[0] + a[1] + a[2] << endl;
    
    return 0;
}
