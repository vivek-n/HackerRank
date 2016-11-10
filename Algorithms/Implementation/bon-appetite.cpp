#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k, bactual, bcharged;
    
    cin >> n >> k;
    
    vector<int> vcost;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        
        vcost.push_back(temp);
    }
    
    cin >> bcharged;
    
    bactual = 0;
    for(int i=0; i<n; i++){
        if(i != k){
            bactual += vcost[i];
        }        
    }
    
    if(bcharged == bactual/2){
        cout << "Bon Appetit" << endl;
    }
    
    else{
        cout << bcharged - bactual/2 << endl;
    }
    
    return 0;
}
