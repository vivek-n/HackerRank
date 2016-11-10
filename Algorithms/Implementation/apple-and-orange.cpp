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
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    
    vector<int> da;
    for(int apple_i = 0;apple_i < m;apple_i++){
       int dist = apple[apple_i] + a;
       
       da.push_back(dist);
    }
    
    vector<int> do_or;
    for(int orange_i = 0;orange_i < n;orange_i++){
       int dist = orange[orange_i] + b;
       
       do_or.push_back(dist);
    }
    
    int ca = 0;
    for(int i=0; i<da.size(); i++){
        //cout << da[i] << " ";
        if((da[i] >= s) && (da[i] <= t)){
            ca++;
        }
    }
    //cout << endl;
    
    int co = 0;
    for(int i=0; i<do_or.size(); i++){
        //cout << do_or[i] << " ";
        if((do_or[i] >= s) && (do_or[i] <= t)){
            co++;
        }
    }
    //cout << endl;
    
    cout << ca << endl;
    cout << co << endl;
    
    return 0;
}
