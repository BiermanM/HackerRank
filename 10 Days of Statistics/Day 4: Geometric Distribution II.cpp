#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

double geometric(int n, double p) {
    return pow((1 - p), (n - 1)) * p;
}

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    double p = (double) n1 / n2;
    
    cout << fixed << setprecision(3);
    double sum = 0;
    for (int i = 1; i <= n3; i++)
        sum += geometric(i, p);
    cout << sum << endl;
    
    return 0;
}
