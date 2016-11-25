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
    int N;
    cin >> N;
    map<string, string> myMap;

    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;

        myMap[emailID] = firstName;
    }

    vector<string> vs;
    for(auto it=myMap.begin(); it != myMap.end(); it++){
        string temp = it->first;

        if(temp.substr(temp.length() - 10, temp.length()) == "@gmail.com"){
            vs.push_back(it->second);
        }
    }

    sort(vs.begin(), vs.end());

    for(int i = 0; i < vs.size(); i++){
        cout << vs[i] << endl;
    }

    return 0;
}
