#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

int getHighestVal(int n, vector<double> arr) {
    int highest = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[highest])
            highest = i;
    }
    
    return highest;
}

vector<int> getRank(int n, vector<double> arr) {
    vector<int> rank(n);
    vector<bool> used(n);
    for (int i = 0; i < n; i++)
        used[i] = false;
    int lowestVal = getHighestVal(n, arr);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            if (used[j] == false && arr[lowestVal] > arr[j])
                    lowestVal = j;
        }
        
        rank[lowestVal] = i;
        used[lowestVal] = true;
        lowestVal = getHighestVal(n, arr);
    }
    
    return rank;
}

double diSquared(int n, vector<int> xRank, vector<int> yRank) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(xRank[i] - yRank[i], 2);
    }
    
    return sum;
}

double spearman(int n, vector<int> xRank, vector<int> yRank) {
    return 1 - ((6 * diSquared(n, xRank, yRank)) / (n * (pow(n, 2) - 1)));
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
    
    cout << fixed << setprecision(3) << spearman(n, getRank(n, x), getRank(n, y)) << endl;
    return 0;
}
