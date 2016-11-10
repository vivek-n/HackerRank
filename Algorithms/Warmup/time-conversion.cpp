#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    string time, otime[3], token;
    cin >> time;
    stringstream sstr(time);
    int i = 0, hr, sec;
    char secs[3];

    while (getline(sstr, token, ':')) {
        otime[i++] = token;
    }

    if (otime[0][0] == '0') {
        char temp = otime[0][1];

        otime[0] = temp;
    }

    hr = atoi(otime[0].c_str());

    if (otime[2][2] == 'A' &&
        hr == 12) {
        hr = 0;
    }

    else if (otime[2][2] == 'P' &&
        hr < 12) {
        hr += 12;
    }

    secs[0] = otime[2][0];
    secs[1] = otime[2][1];
    secs[2] = '\0';

    sec = atoi(secs);

    if (hr <= 9)
        cout << 0;

    cout << hr << ":" << otime[1] << ":";
    
    if (sec <= 9)
        cout << 0;
    
    cout << sec << endl;

    return 0;
}
