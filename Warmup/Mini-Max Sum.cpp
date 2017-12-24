#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    int smallestInt = 0;
    int largestInt = 0;
    int64_t smallestSum = 0;
    int64_t largestSum = 0;
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
       if (arr[arr_i] < arr[smallestInt])
           smallestInt = arr_i;
       if (arr[arr_i] > arr[largestInt])
           largestInt = arr_i;
    }
    
    for (int i = 0; i < 5; i++) {
        if (i != smallestInt)
            smallestSum += arr[i];
        if (i != largestInt)
            largestSum += arr[i];
    }
    
    cout << largestSum << " " << smallestSum;
    
    return 0;
}
