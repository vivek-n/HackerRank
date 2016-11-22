#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //TODO: one test case is still failing; revisit later
    
    long n;
    
    cin >> n;
    
    map<string, long> phoneBook;
    vector<string> query;
    
    for(long i=0; i<n; i++){
        string name;
        long phNumber;
        
        cin >> name >> phNumber;
        
        phoneBook.insert(pair<string, long>(name, phNumber));
    }
    
    for(long i=0; i<n; i++){
        string q;
        
        cin >> q;
        
        query.push_back(q);
    }
    
    for(long i=0; i<n; i++){
        map<string, long>::iterator it;
        it = phoneBook.find(query[i]);
        
        if(it != phoneBook.end()){
            cout << query[i] << "=" << it->second << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
