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
    int n;
    cin >> n;
    vector<int> digits;
    
    int temp = n;
    
    while(temp != 0){
        digits.push_back(temp % 2);
        temp /= 2;
    }
    
    /*cout << "digits are: ";
    for(int i=0; i<digits.size(); i++){
        cout << digits[i] << ", ";
    }
    cout << endl;*/
    
    vector<int> cons1;
    int consecutive = 0;
    for(int i=0; i<digits.size(); i++){
        if(digits[i] == 1){
            consecutive++;
        }
        
        else if(digits[i] == 0){
            if(consecutive != 0){
                cons1.push_back(consecutive);
            
                consecutive = 0;
            }
        }
    }
    
    if(consecutive != 0){
        cons1.push_back(consecutive);

        consecutive = 0;
    }
    
    /*cout << "cons1's are: ";
    for(int i=0; i<cons1.size(); i++){
        cout << cons1[i] << ", ";
    }
    cout << endl;*/
    
    int maxConsecutive = 0;
    for(int i=0; i<cons1.size(); i++){
        if(maxConsecutive < cons1[i]){
            maxConsecutive = cons1[i];
        }
    }
    
    cout << maxConsecutive << endl;
    
    return 0;
}
