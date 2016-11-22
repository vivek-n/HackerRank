#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    map<string, int> myMap;

    for(int i=0; i<q; i++){
        int type;
        string str;
        int marks;
        map<string, int>::iterator it;

        cin >> type;
        cin >> str;

        switch(type){
            case 1: cin >> marks;
                it = myMap.find(str);
                if(it != myMap.end()){
                    it->second += marks;
                }
                else{
                    myMap[str] = marks;
                }
                break;

            case 2: it = myMap.find(str);
                if(it != myMap.end()){
                    myMap.erase(str);
                }
                break;

            case 3: it = myMap.find(str);
                if(it != myMap.end()){
                    cout << it->second << endl;
                }
                else{
                    cout << 0 << endl;
                }
                break;
        }
    }

    return 0;
}
