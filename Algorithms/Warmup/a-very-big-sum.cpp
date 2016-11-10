#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    long long lli(0);
    
    for(int i=0; i<n; i++){
        lli += arr.at(i);
    }
    
    cout << lli << endl;
    
    return 0;
}
