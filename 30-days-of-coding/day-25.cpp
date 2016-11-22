#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int val;
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> val;
        
        //cout << "val is " << val << endl;
        //cout << "sqrt returns " << (int)sqrt(val) << endl;
        
        if(val == 1){
            cout << "Not prime" << endl;
            
            continue;
        }
        
        else if(val == 2){
            cout << "Prime" << endl;
            
            continue;
        }
        
        for(int j=2; j<=sqrt(val); j++){
            //cout << val << " % " << j << " = " << val % j << endl;
            
            if(val % j == 0){
                cout << "Not prime" << endl;
                break;
            }
            
            //cout << "compare: " << j << ", " << (int)sqrt(val) << endl;
            if(j == (int)sqrt(val)){
                cout << "Prime" << endl;
            }
        }
    }
    
    return 0;
}
