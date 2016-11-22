#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    vector<string> vs;
    string str;
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> str;
        vs.push_back(str);
    }
    
    for(int i=0; i<n; i++){
        str = vs.at(i);
        
        for(int j=0; j<str.length(); j++){
            if(j%2 == 0){ //even
                cout << str[j];
            }
        }
        
        cout << " ";
        
        for(int j=0; j<str.length(); j++){
            if(j%2 != 0){ //odd
                cout << str[j];
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
