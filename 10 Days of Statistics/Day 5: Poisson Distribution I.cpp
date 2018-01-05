#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n) {
    if (n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

double poisson(double k, double lambda) {
    return (pow(lambda, k) * pow(2.71828, lambda * -1)) / factorial(k);
}

int main() {
    double lambda, k;
    cin >> lambda >> k;
    
    cout << fixed << setprecision(3) << poisson(k, lambda) << endl;
    return 0;
}
