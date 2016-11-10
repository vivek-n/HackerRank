#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    
    int row = int(floor(sqrt(s.size())));
    int col = int(ceil(sqrt(s.size())));
    
    //cout << row << ", " << col << endl;
    
    if(row*col < s.size()){
        row++;
    }
    
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            if(i+j*col < s.size()){
                cout << s[i+j*col];
            }
        }
        
        if(i != col-1){
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}
