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
    double mean, stdDev, n1, n2;
    cin >> mean >> stdDev >> n1 >> n2;
    
    cout << fixed << setprecision(2) << (1 - normalDist(n1, mean, stdDev)) * 100 << "\n" << (1 - normalDist(n2, mean, stdDev)) * 100 << "\n" << normalDist(n2, mean, stdDev) * 100 << endl;
    return 0;
}
