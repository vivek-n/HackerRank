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
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    int i = 0, dk1 = 0, dk2 = 0;
    
    if(((x1 > x2) && (v1 > v2))
       || ((x1 < x2) && (v1 < v2))){
        cout << "NO" << endl;

        return 0;
    }

    else if((x1 == x2) && (v1 == v2)){
        cout << "YES" << endl;
        
        return 0;
    }
    
    dk1 = x1;
    dk2 = x2;
    
    while(1){
        dk1 += v1;
        dk2 += v2;
        
        //cout << dk1 << " " << dk2 << endl;
        
        if(dk1 == dk2){
            cout << "YES" << endl;
            
            break;
        }
        
        if(dk1 > dk2 + v2){
            cout << "NO" << endl;
            break;
        }
    }
    
    return 0;
}
