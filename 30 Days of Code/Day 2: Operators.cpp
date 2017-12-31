#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double mealCost;
    int tipPercent, taxPercent;
    cin >> mealCost >> tipPercent >> taxPercent;
    
    cout << "The total meal cost is " << fixed << setprecision(0) << (mealCost + (mealCost * tipPercent * 0.01) + (mealCost * taxPercent * 0.01)) << " dollars." << endl;

    return 0;
}
