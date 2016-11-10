#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> vc(t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        
        int numChoc = n/c;
        int wrappers = numChoc;
        //cout << "numChoc: " << numChoc << ", wrappers: " << wrappers << endl;
        
        while(wrappers >= m){
            //cout << "begin: numChoc: " << numChoc << ", wrappers: " << wrappers << endl;
            numChoc += wrappers / m;
            wrappers = wrappers / m + wrappers % m;
            //cout << "end: numChoc: " << numChoc << ", wrappers: " << wrappers << endl;
        }
        
        vc[a0] = numChoc;
    }
    
    for(int i=0; i<t; i++){
        cout << vc[i] << endl;
    }
    
    return 0;
}
