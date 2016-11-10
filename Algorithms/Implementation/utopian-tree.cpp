#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    
    vector<int> numSeasons(t);
    for(int a0 = 0; a0 < t; a0++){
        cin >> numSeasons[a0];
    }
    
    vector<int> finalHeight(t);
    for(int i=0; i<t; i++){
        int height = 1;
        
        for(int j=0; j<numSeasons[i]; j++){
            if(j % 2 == 0){ //spring
                height *= 2;
            }
            
            else{ //summer
                height += 1;
            }
        }
        
        finalHeight[i] = height;
    }
    
    for(int i=0; i<finalHeight.size(); i++){
        cout << finalHeight[i] << endl;
    }
    
    return 0;
}
