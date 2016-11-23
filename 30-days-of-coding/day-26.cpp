#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;

    int fine;

    if (y2 > y1) {
        fine = 0;
    }

    else if (y2 == y1){
        if (m1 > m2) {
            fine = (m1 - m2) * 500;
        }

        else if(m1 == m2){
            if (d1 > d2) {
                fine = (d1 - d2) * 15;
            }

            else if (d1 == d2) {
                fine = 0;
            }

            else {
                fine = 0;
            }
        }
        else {
            fine = 0;
        }
    }

    else {
        fine = 10000;
    }

    cout << fine << endl;
    
    return 0;
}
