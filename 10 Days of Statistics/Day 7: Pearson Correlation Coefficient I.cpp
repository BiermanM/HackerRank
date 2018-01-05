#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

double mean(int n, vector<double> arr) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    
    return sum / n;
}

double stdDev(int n, vector<double> arr, double mean) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += pow(abs(arr[i] - mean), 2);
    
    return sqrt(sum / n);
}

double pearson(int n, vector<double> x, double xMean, double xStdDev, vector<double> y, double yMean, double yStdDev) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += (x[i] - xMean) * (y[i] - yMean);
    
    return sum / (n * xStdDev * yStdDev);
}

int main() {
    int n;
    cin >> n;
    vector<double> x, y;
    
    for (int i = 0; i < 2 * n; i++) {
        double val;
        cin >> val;
        if (i < n)
            x.push_back(val);
        else
            y.push_back(val);
    }
    
    double xMean = mean(n, x);
    double yMean = mean(n, y);
    double xStdDev = stdDev(n, x, xMean);
    double yStdDev = stdDev(n, y, yMean);
    
    cout << fixed << setprecision(3) << pearson(n, x, xMean, xStdDev, y, yMean, yStdDev) << endl;
    
    return 0;
}
