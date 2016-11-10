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
    int n, total_pairs = 0;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    for(int i=0; i<n; i++){
        vector<int> pair;
        int match = c[i];
        
        pair.push_back(c[i]);
        for(int j=i+1; j<n; j++){
            //cout << "compare: " << c[i] << " " << c[j] << endl;
            if(c[i] == c[j]){
                //cout << "push..." << endl;
                pair.push_back(c[j]);
            }
        }
        
        /*cout << "Pairs are ";
        for(int k=0; k<pair.size(); k++){
            cout << c[k] << " ";
        }
        cout << endl;*/
        
        if((pair.size() > 1) && (pair.size() % 2 == 0)){
            total_pairs++;
        }
    }
    
    cout << total_pairs << endl;
    
    return 0;
}
