#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    int pd = 0, sd = 0, diff;
    
    for(int i=0; i<n; i++)
        pd += a[i][i];
    
    int k=0;
    for(int i=n; i>0; i--)
        sd += a[k++][i-1];
    
    diff = pd - sd;
    
    if(diff <= -1)
        diff *= -1;
    
    cout << diff << endl;
    
    return 0;
}
