#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, d;
    
    cin >> n >> d;
    
    vector<int> vi(n);
    for(int i=0; i<n; i++){
        cin >> vi[i];
    }
    
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if((vi[k] - vi[j] == d) && (vi[j] - vi[i] == d)){
                    count++;
                    //cout << vi[i] << " " << vi[j] << " " << vi[k] << endl;
                }
                
                else if(vi[k] - vi[j] > d){
                    break;
                }
            }
            
            if(vi[j] - vi[i] > d){
                break;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
