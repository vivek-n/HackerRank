#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    vector<int> temp = arr;
    for(int i=0; i<n; i++){
        int sticks_cut = 0, minimum;
        
        /*cout << "temp is ";
        for(int j=0; j<temp.size(); j++){
            cout << temp[j] << " ";
        }
        cout << endl;*/
        
        minimum = temp[0];
        for(int j=1; j<temp.size(); j++){
            //cout << "compare: " << minimum << " " << temp[j] << endl;
            if((minimum <= 0) || 
                ((temp[j] > 0) && (minimum > temp[j]))){
                minimum = temp[j];
            }
        }
        
        //cout << "minimum is " << minimum << endl;
        
        if(minimum == 0){
            break;
        }
        
        /*if(minimum == 0){
            for(int j=0; j<temp.size(); j++){
                if(temp[j] >= 0){
                    sticks_cut++;
                }
            }
            
            cout << "sticks_cut is " << sticks_cut << endl;
            break;
        }*/
        
        for(int j=0; j<temp.size(); j++){
            if(temp[j] == 0){
                temp[j] = -1;
            }
            
            else if(temp[j] != -1){
                temp[j] -= minimum;
            }
        }
        
        /*cout << "temp now is ";
        for(int j=0; j<temp.size(); j++){
            cout << temp[j] << " ";
        }
        cout << endl;*/
        
        for(int j=0; j<temp.size(); j++){
            if(temp[j] >= 0){
                sticks_cut++;
            }
        }
        
        if(sticks_cut != 0)
            cout << sticks_cut << endl;
        else
            break;
    }
    
    return 0;
}
