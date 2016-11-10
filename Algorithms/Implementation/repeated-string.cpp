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
    string s;
    cin >> s;
    long n;
    cin >> n;
    const char ca = 'a';
    
    vector<int> posn;
    for(int i=0; i<s.size(); i++){        
        if(s[i] == 'a'){
            posn.push_back(i);
        }
    }
    
    /*cout << "a present at posn: ";
    for(int i=0; i<posn.size(); i++){
        cout << posn[i] << " ";
    }
    cout << endl;*/
    
    long numA;
    if(posn.size() == 0){
        //cout << "a not present" << endl;
        numA = 0;
    }
    
    else if((s.size() == 1) && (posn.size() == 1)){
        //cout << "one's case" << endl;
        numA = n;
    }
    
    else{
        //cout << "else" << endl;
        numA = (n / s.size()) * posn.size(); //whole
        
        int reminder = n % s.size();
        
        //cout << "reminder is " << reminder << endl;
        
        for(int i=0; i<reminder; i++){
            if(s[i] == 'a'){
                numA++;
            }
        }
    }
    
    cout << numA << endl;
    
    return 0;
}
