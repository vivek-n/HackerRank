#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int totalChap, probPerPage;
    
    cin >> totalChap >> probPerPage;
    vector<int> probPerChap(totalChap);
        
    for(int i=0; i<totalChap; i++){
        cin >> probPerChap[i];
    }
    
    int sameProbPage = 0;
    int current_page = 1;
    
    for(int i=0; i<totalChap; i++){
        //cout << "i: " << i << ", probPerChap[i] is " << probPerChap[i] << endl;
        for(int j=1; j<=probPerChap[i]; j++){
            //cout << "j: " << j << ", current_page: " << current_page << endl;
            
            if(j == current_page){
                sameProbPage++;
                //cout << "match: sameProbPage: " << sameProbPage << endl;
            }
            
            /*else{
                cout << "no match" << endl;
            }*/
            
            if(j % probPerPage == 0){
                current_page++;
                
                //cout << "incr current_page: " << current_page << endl;
            }
        }
        
        //cout << "end chapter: " << i+1 << endl;
        if((probPerChap[i] < probPerPage) ||
          (probPerChap[i] % probPerPage != 0)){
            current_page++;
            //cout << "final incr current_page: " << current_page << endl;
        }
        /*else{
            cout << "no final incr current_page: " << current_page << endl;
        }*/
    }
    
    cout << sameProbPage << endl;
    
    return 0;
}
