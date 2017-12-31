#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int a, int b, vector<int> &nums) {
    int temp = nums[a];
    nums[a] = nums[b];
    nums[b] = temp;
}

void sortArray(int n, vector<int> &nums) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (nums[i] < nums[j])
                swap(i, j, nums);
        }
    }
}

double getMedian(int n, vector<int> nums) {
    if (n % 2 == 0)
        return (double) (nums[n / 2] + nums[(n / 2) - 1]) / 2;
    else
        return nums[n / 2];
}

int main() {
    int n;
    cin >> n;
    vector<int> tempNums, nums;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        tempNums.push_back(val);
    }
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        for (int j = 0; j < val; j++) {
            nums.push_back(tempNums[i]);
        }
    }
    
    n = nums.size();
    sortArray(n, nums);
    
    vector<int> lowerNums, higherNums;
    for (int i = 0; i < n; i++) {
        if (n % 2 == 1) {
            if (i < n / 2)
                lowerNums.push_back(nums[i]);
            else if (i > n / 2)
                higherNums.push_back(nums[i]);
        }
        else {
            if (i <= (n / 2) - 1)
                lowerNums.push_back(nums[i]);
            else
                higherNums.push_back(nums[i]);
        }
    }
    
    double firstQuartile = getMedian(lowerNums.size(), lowerNums);
    double thirdQuartile = getMedian(higherNums.size(), higherNums);
    
    cout << fixed << setprecision(1) << (thirdQuartile - firstQuartile) << endl;
    
    return 0;
}
