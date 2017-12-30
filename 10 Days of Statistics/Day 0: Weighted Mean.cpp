#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

double getWMean(int n, vector<int> &nums, vector<int> &weights) {
    int sumOfProducts = 0, sumOfWeights = 0;
    for (int i = 0; i < n; i++) {
        sumOfProducts += (nums[i] * weights[i]);
        sumOfWeights += weights[i];
    }
    
    
    
    return (double) sumOfProducts / sumOfWeights;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    vector<int> weights;
    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        nums.push_back(val);
    }
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        weights.push_back(val);
    }
    
    cout << fixed << setprecision(1) << getWMean(n, nums, weights) << endl;
    
    return 0;
}
