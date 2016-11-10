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


int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    int current = 0, jumps = 0;
    for(int i=0; i<n; ){
        if(current == n - 1){
            //cout << "break" << endl;
            break;
        }
        
        if(c[i] == 1)
            continue;
        
        if((i+2 < n) && (c[i+2] == 0)){
            //cout << "2 x jump" << endl;
            current = i+2;
            i = i+2;
            jumps++;
            //cout << "current: " << current << ", jumps: " << jumps << endl;
        }
        
        else if((i+1 < n) && (c[i+1] == 0)){
            //cout << "1 x jump" << endl;
            current = i+1;
            i++;
            jumps++;
            //cout << "current: " << current << ", jumps: " << jumps << endl;
        }
        
        else{
            //cout << "else" << endl;
            current = i;
        }
    }
    
    cout << jumps << endl;
    
    return 0;
}
