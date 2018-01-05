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

double binomial(int x, int n, double p) {
    return (factorial(n) / (factorial(x) * factorial(n - x))) * pow(p, x) * pow((1 - p), (n - x));
}

int main() {
    int p, n;
    cin >> p >> n;
    
    double num = binomial(0, n, p * 0.01) + binomial(1, n, p * 0.01) + binomial(2, n, p * 0.01);
    cout << fixed << setprecision(3) << num << "\n" << (1 - num) + binomial(2, n, p * 0.01) << endl;
    return 0;
}
