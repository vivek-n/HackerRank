#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    long long ll;
    char c;
    float f;
    double d;
    
    //cin >> i >> l >> ll >> c >> f >> d;
    scanf("%d %ld %lld %c %f %lf", &i, &l, &ll, &c, &f, &d);
    
    printf("%d\n%ld\n%lld\n%c\n%f\n%lf\n", i, l, ll, c, f, d);
    
    //cout << i << endl << l << endl << ll << endl << c << endl << f << endl << d << endl;
    
    return 0;
}
