#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    set<int> si;

    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;

        if(a == 1){
            si.insert(b);
        }

        else if(a == 2){
            set<int>::iterator it = si.find(b);
            if(it != si.end()){
                si.erase(b);
            }
        }

        else{
            set<int>::iterator it = si.find(b);
            if(it != si.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }

        /*cout << "set contains: ";
        for(set<int>::iterator it = si.begin(); it != si.end(); it++){
            cout << *it << " ";
        }
        cout << endl;*/
    }

    return 0;
}
