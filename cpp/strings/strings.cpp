#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a, b;
    string c;
    string ca, cb;
    
    char temp;
    
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << endl;
    
    c = a + b;
    
    cout << c << endl;
    
    ca = a;
    cb = b;
    
    temp = ca[0];
    ca[0] = cb[0];
    cb[0] = temp;
    
    cout << ca << " " << cb << endl;
  
    return 0;
}
