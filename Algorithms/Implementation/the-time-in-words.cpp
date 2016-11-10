#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    
    const char* const hours[12] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};
    const char* const minutes[29] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};
    
    if(m == 0){
        cout << hours[h-1] << " o' clock" << endl;
    }
    
    else if(m == 1){
        cout << minutes[m-1] << " minute past " << hours[h-1] << endl;
    }
    
    else if(m == 15){
        cout << "quarter past " << hours[h-1] << endl;
    }
    
    else if(m < 30){
        cout << minutes[m-1] << " minutes past " << hours[h-1] << endl;
    }
    
    else if(m == 30){
        cout << "half past " << hours[h-1] << endl;
    }
    
    else if(m == 45){
        cout << "quarter to " << hours[h] << endl;
    }
    
    else{ //if(m > 30)
        cout << minutes[60-m-1] << " minutes to " << hours[h] << endl;
    }
    
    return 0;
}
