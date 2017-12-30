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

double mean(int n, vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += nums[i];
    
    return sum / (double) n;
}

double median(int n, vector<int> nums) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (nums[i] < nums[j])
                swap(i, j, nums);
        }
    }
    
    if (n % 2 == 0)
        return (double) (nums[n / 2] + nums[(n / 2) - 1]) / 2;
    else
        return nums[n / 2];
}

int mode(int n, vector<int> nums) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (nums[i] < nums[j])
                swap(i, j, nums);
        }
    }
    
    int mostNums = 0;
    int tempMaxNums = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            tempMaxNums++;
            if (tempMaxNums > mostNums)
                mostNums = i;
        }
        else
            tempMaxNums = 1;
    }
    
    return nums[mostNums];
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
    
    cout << fixed << setprecision(1) << mean(n, nums) << "\n" << median(n, nums) << "\n" << mode(n, nums) << endl;
    
    return 0;
}
