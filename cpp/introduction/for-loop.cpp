#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i, min, max;
    cin >> min >> max;
    
    for(i=min; i<=max; i++){
        if(i == 1)
            cout << "one" << endl;
        else if(i == 2)
            cout << "two" << endl;
        else if(i == 3)
            cout << "three" << endl;
        else if(i == 4)
            cout << "four" << endl;
        else if(i == 5)
            cout << "five" << endl;
        else if(i == 6)
            cout << "six" << endl;
        else if(i == 7)
            cout << "seven" << endl;
        else if(i == 8)
            cout << "eight" << endl;
        else if(i == 9)
            cout << "nine" << endl;
        else if(i%2 != 0)
            cout << "odd" << endl;
        else
            cout << "even" << endl;
        
    }
    
    
    return 0;
}
