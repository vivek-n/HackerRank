#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
private: 
    vector<char> vcs, vcq;
public:
    Solution() {
    }

    void pushCharacter(char c) {
        vcs.push_back(c);
    }

    char popCharacter() {
        char temp = vcs.back();

        vcs.pop_back();

        return temp;
    }

    void enqueueCharacter(char c) {
        vcq.push_back(c);
    }

    char dequeueCharacter() {
        char temp = vcq.front();

        vcq.erase(vcq.begin());

        return temp;
    }
};
