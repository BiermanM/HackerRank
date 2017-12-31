#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

double getMean(int n, vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += nums[i];
    
    return sum / (double) n;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        nums.push_back(val);
    }
    
    double mean = getMean(n, nums);
    double stdDev = 0;
    for (int i = 0; i < n; i++)
        stdDev += pow((nums[i] - mean), 2);
    
    stdDev = sqrt(stdDev / n);
    cout << fixed << setprecision(1) << stdDev << endl;
    
    return 0;
}
