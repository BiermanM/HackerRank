#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void plusMinus(int n, vector<int> arr) {
    double pos = 0;
    double neg = 0;
    double zero = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }
    
    pos = pos / n;
    neg = neg / n;
    zero = zero / n;
    
    cout << pos << "\n" << neg << "\n" << zero;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    plusMinus(n, arr);
    
    return 0;
}
