#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> classCancel(t);
    
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        
        int sum = 0;
        for(int i=0; i<n; i++){
            if(a[i] <= 0){
                sum++;                
            }
        }
        
        if(sum < k){
            classCancel[a0] = "YES";
        }
        else{
            classCancel[a0] = "NO";
        }
    }
    
    for(int i=0; i<t; i++){
        cout << classCancel[i] << endl;
    }
    
    return 0;
}
