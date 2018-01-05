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
    double n1, n2;
    cin >> n1 >> n2;
    
    double p = n1 / (n1 + n2);
    
    cout << fixed << setprecision(3) << binomial(3, 6, p) + binomial(4, 6, p) + binomial(5, 6, p) + binomial(6, 6, p) << endl;
    return 0;
}
