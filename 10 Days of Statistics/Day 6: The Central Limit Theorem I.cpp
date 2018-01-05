#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

double normalDist(double x, double mean, double stdDev) {
    return 0.5*(1 + erf((x - mean) / (stdDev * pow(2.0,0.5))));
}

int main() {
    double maxWeight, numBoxes, mean, stdDev;
    cin >> maxWeight >> numBoxes >> mean >> stdDev;
    
    cout << fixed << setprecision(4) << normalDist(maxWeight, (numBoxes * mean), (sqrt(numBoxes) * stdDev)) << endl;
    
    return 0;
}
