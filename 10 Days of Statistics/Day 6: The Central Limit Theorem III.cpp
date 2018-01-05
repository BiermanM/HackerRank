#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double n, mean, stdDev, distPerc, z;
    cin >> n >> mean >> stdDev >> distPerc >> z;
    
    cout << fixed << setprecision(2) << mean - ((z * stdDev) / sqrt(n)) << "\n" << mean + ((z * stdDev) / sqrt(n)) << endl;
    
    return 0;
}
