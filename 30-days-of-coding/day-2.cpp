#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double mealCost;
    int tipPercent;
    int taxPercent;
    int totalCost;
    double tip, tax;
    
    cin >> mealCost >> tipPercent >> taxPercent;
    
    tip = mealCost * (tipPercent / 100.00);
    tax = mealCost * (taxPercent / 100.00);
    
    //cout << "tip is " << tip << endl;
    //cout << "tax is " << tax << endl;
        
    totalCost = int(round(mealCost + tip + tax));
    
    cout << "The total meal cost is " << totalCost << " dollars." << endl;
    
    return 0;
}
