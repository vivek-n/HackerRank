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

bool isEven(const vector<int> &B){
    for(int i=0; i<B.size(); i++){
        
        if(B[i] % 2 == 1){
            //cout << "isEven return false (odd) - " << B[i] << endl;
            return false;
        }
    }
    
    //cout << "isEven return true (even)" << endl;
    return true;
}

int main(){
    int N;
    cin >> N;
    vector<int> B(N);
    for(int B_i = 0;B_i < N;B_i++){
       cin >> B[B_i];
    }
    
    int bread = 0;
    
    int timeout = 0;
    while(!isEven(B)){
        timeout++;
        
        if(timeout == N){
            break;
        }
        
        for(int i=0; i<N; i++){
            //cout << "check " << B[i] << ", i: " << i << endl;
            
            if(B[i] % 2 == 1){
                B[i]++;
                bread++;
                
                if(i == N-1){
                    //cout << "rightmost" << endl;
                    B[i-1]++;
                    bread++;
                }
                
                else if(i == 0){
                    //cout << "leftmost" << endl;
                    B[i+1]++;
                    bread++;
                }
                
                else{
                    if((B[i-1] % 2 == 0) && (B[i+1] % 2 == 1)){
                        //cout << "right is odd" << endl;
                        B[i+1]++;
                        bread++;
                    }
                    
                    else if((B[i-1] % 2 == 1) && (B[i+1] % 2 == 0)){
                        //cout << "left is odd" << endl;
                        B[i-1]++;
                        bread++;
                    }
                    
                    else{
                        //cout << "doing right anyways" << endl;
                        B[i+1]++;
                        bread++;
                    }
                }
            }
            
            /*cout << "array is: ";
            for(int i=0; i<N; i++){
                cout << B[i] << ", ";
            }
            cout << endl;*/
        }
    }
    
    if(timeout != N){
        cout << bread << endl;
    }
    
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}
