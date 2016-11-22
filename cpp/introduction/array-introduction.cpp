#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, n, temp;
    vector<int> vi;
    
    cin >> n;
        
    for(i=0; i<n; i++){
        cin >> temp;
        vi.push_back(temp);
    }
    
    for(i=vi.size() - 1; i>=0; i--){
        cout << vi.at(i) << " ";
    }
    
    return 0;
}
