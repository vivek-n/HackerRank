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
using namespace std;


int main(){
    //TODO: revisit later to simplify

    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    vector<int> vsum;
    /*for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==1 && j!=1)
                continue;
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for(int i=0; i<3; i++){
        for(int j=1; j<4; j++){
            if(i==1 && j!=2)
                continue;
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for(int i=0; i<3; i++){
        for(int j=2; j<5; j++){
            if(i==1 && j!=3)
                continue;
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for(int i=0; i<3; i++){
        for(int j=3; j<6; j++){
            if(i==1 && j!=4)
                continue;
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }*/
    
    /*for(int k=0; k<4; k++){
        for(int i=0; i<3; i++){
            for(int j=k; j<k+3; j++){
                if(i==1 && j!=k+1)
                    continue;
                
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }*/
    
    /*for(int i=1; i<4; i++){
        for(int j=0; j<3; j++){
            if(i==2 && j!=1)
                continue;
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for(int i=1; i<4; i++){
        for(int j=1; j<4; j++){
            if(i==2 && j!=2)
                continue;
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for(int i=1; i<4; i++){
        for(int j=2; j<5; j++){
            if(i==2 && j!=3)
                continue;
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for(int i=1; i<4; i++){
        for(int j=3; j<6; j++){
            if(i==2 && j!=4)
                continue;
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;*/
    
    for(int k=0; k<4; k++){
        int sum = 0;
        
        for(int i=0; i<3; i++){
            for(int j=k; j<k+3; j++){
                if(i==1 && j!=k+1)
                    continue;
                
                sum += arr[i][j];
                //cout << arr[i][j] << " ";
            }
            //cout << endl;
        }
        //cout << sum << endl;
        
        vsum.push_back(sum);
    }
    //cout << endl;
    
    for(int k=0; k<4; k++){
        int sum = 0;
        
        for(int i=1; i<4; i++){
            for(int j=k; j<k+3; j++){
                if(i==2 && j!=k+1)
                    continue;
                
                sum += arr[i][j];
                //cout << arr[i][j] << " ";
            }
            //cout << endl;
        }
        //cout << endl;
        
        vsum.push_back(sum);
    }
    //cout << endl;
    
    for(int k=0; k<4; k++){
        int sum = 0;
        
        for(int i=2; i<5; i++){
            for(int j=k; j<k+3; j++){
                if(i==3 && j!=k+1)
                    continue;
                
                sum += arr[i][j];
                //cout << arr[i][j] << " ";
            }
            //cout << endl;
        }
        //cout << endl;
        
        vsum.push_back(sum);
    }
    //cout << endl;
    
    for(int k=0; k<4; k++){
        int sum = 0;
        
        for(int i=3; i<6; i++){
            for(int j=k; j<k+3; j++){
                if(i==4 && j!=k+1)
                    continue;
                
                sum += arr[i][j];
                //cout << arr[i][j] << " ";
            }
            //cout << endl;
        }
        //cout << endl;
        
        vsum.push_back(sum);
    }
    //cout << endl;
    
    /*for(int l=0; l<4; l++){
        for(int k=0; k<4; k++){
            for(int i=l; i<6; i++){
                for(int j=k; j<k+3; j++){
                    if(i==l && j!=k+1)
                        continue;

                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }*/
    
    int maxSum = vsum[0];
    
    for(int i=1; i<vsum.size(); i++){
        if(maxSum < vsum[i]){
            maxSum = vsum[i];
        }
    }
    
    cout << maxSum << endl;
    
    return 0;
}
