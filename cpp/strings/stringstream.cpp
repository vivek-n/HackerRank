#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> vi;
    char ch;
    int temp;
    
    ss >> temp;
    vi.push_back(temp);
    
    while(ss.good()){
        ss >> ch >> temp;
        vi.push_back(temp);
    }
    
    return vi;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
