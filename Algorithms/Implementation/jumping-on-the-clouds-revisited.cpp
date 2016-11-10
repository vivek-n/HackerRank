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
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    int current = 0, jumps = 0, energy = 100;
    for(int i=0; i<=n; ){
        if(current == n){
            //cout << "break" << endl;
            break;
        }
        
        if(i+k <= n){
            //cout << "2 x jump(2)" << endl;
            current = i+k;
            i = i+k;
            jumps++;
            if(c[i % n] == 0)
                energy--;
            else
                energy -= 3;
            //cout << "current: " << current << ", jumps: " << jumps << ", energy: " << energy << endl;
        }
        
        else{
            int temp = k;
            while(1){
                //cout << "while" << endl;
                temp--;

                if(current == n)
                    break;

                if(i+temp <= n){
                    //cout << "2 x jump(2)" << endl;
                    current = i+temp;
                    i = i+temp;
                    jumps++;
                    if(c[i % n] == 0)
                        energy--;
                    else
                        energy -= 3;
                    //cout << "current: " << current << ", jumps: " << jumps << ", energy: " << energy << endl;

                    break;
                }
            }
        }
    }
    
    cout << energy << endl;
    
    return 0;
}
