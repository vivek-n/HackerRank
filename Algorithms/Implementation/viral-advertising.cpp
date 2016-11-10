#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int shared, total_shared = 0;
    int temp;
    
    cin >> n;
    temp = 5;
    
    for(int i=0; i<n; i++){
        shared = floor(temp/2.0);
        temp = shared * 3;
                
        total_shared += shared;
        
        //cout << "day " << i+1 << ": " << "shared: " << shared << " << endl;
        //cout << "total_shared: " << total_shared << endl;
    }
    
    //cout << shared << " " << not_shared << endl;
    cout << total_shared << endl;
    
    return 0;
}
