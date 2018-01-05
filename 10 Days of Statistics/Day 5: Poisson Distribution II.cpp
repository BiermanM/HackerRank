#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    
    double cA = 160 + (40 * (a + (a * a)));
    double cB = 128 + (40 * (b + (b * b)));
    
    cout << fixed << setprecision(3) << cA << "\n" << cB << endl;
    return 0;
}
