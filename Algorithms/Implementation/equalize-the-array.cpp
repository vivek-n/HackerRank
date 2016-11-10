#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    map<int, int> dist;
    map<int, int>::iterator it;
    
    for(int i=0; i<n; i++){
        if((it = dist.find(v[i])) != dist.end()){
            it->second++;
        }
        
        else{
            dist.insert(pair<int, int>(v[i], 1));
        }
    }
    
    int largest = -1;
    for(auto it=dist.begin(); it!=dist.end(); it++){
        if(largest < it->second){
            largest = it->second;
        }
    }
    
    cout << n - largest << endl;
    
    return 0;
}
