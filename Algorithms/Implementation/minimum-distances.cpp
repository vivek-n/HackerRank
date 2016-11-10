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
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
    
    map<int, vector<int>> pairs;
            
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(A[i] == A[j]){
                map<int, vector<int>>::iterator it;
                it = pairs.find(A[j]);
                
                if(it != pairs.end()){
                    continue;
                }
                
                vector<int> tempV(2);
                tempV[0] = i;
                tempV[1] = j;
                
                pairs.insert(pair<int, vector<int>>(A[j], tempV));
                                
                break;
            }
        }
    }
    
    if(pairs.size() == 0){
        cout << -1 << endl;
        
        return 0;
    }
    
    /*cout << "printing map: " << endl;
    for(auto it = pairs.begin(); it != pairs.end(); it++){
        cout << it->first << ": ";
        vector<int> temp = it->second;
        
        cout << "at " << temp[0] << ", " << temp[1] << endl;
    }*/
    
    vector<int> dmin;
    for(auto it = pairs.begin(); it != pairs.end(); it++){
        vector<int> temp = it->second;
        
        dmin.push_back(abs(temp[0] - temp[1]));
    }
    
    /*cout << "printing dmin: ";
    for(int i=0; i<dmin.size(); i++){
        cout << dmin[i] << ", ";
    }
    cout << endl;*/
    
    int leastDist = 0xFFFF;
    
    for(int i=0; i<dmin.size(); i++){
        if(leastDist > dmin[i]){
            leastDist = dmin[i];
        }
    }
    
    cout << leastDist;
    
    return 0;
}
