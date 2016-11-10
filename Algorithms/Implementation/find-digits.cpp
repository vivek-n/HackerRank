#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> vi(n);
    vector<int> vdiv(n);
    
    for(int i=0; i<n; i++){
        cin >> vi[i];
    }
    
    for(int i=0; i<n; i++){
        int numDigits = 0;
        int temp = vi[i];
        vector<int> digits;
        
        while(temp != 0){
            digits.push_back(temp%10);
                
            temp /= 10;
            numDigits++;
        }
        
        /*cout << "numDigits for " << vi[i] << " is " << numDigits << " and they are ";
        
        for(int j=0; j <digits.size(); j++){
            cout << digits[j] << ", ";
        }
        cout << endl;*/
        
        int div = 0;
        for(int j=0; j <digits.size(); j++){
            
            if((digits[j] != 0) && (vi[i] % digits[j] == 0)){
                div++;
            }
        }
        vdiv[i] = div;
    }
    
    for(int i=0; i<vdiv.size(); i++){
        cout << vdiv[i] << endl;
    }
    
    return 0;
}
