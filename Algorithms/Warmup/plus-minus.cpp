#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    int np, nn, nz;
    
    np = nn = nz = 0;
    
    for(int i=0; i<n; i++){
        if(arr[i] > 0)
            np++;
        
        else if(arr[i] < 0)
            nn++;
            
        else
            nz++;
    }
    
    cout << fixed << setprecision(6) << (float)np/n << endl;
    cout << fixed << setprecision(6) << (float)nn/n << endl;
    cout << fixed << setprecision(6) << (float)nz/n << endl;
    
    return 0;
}
