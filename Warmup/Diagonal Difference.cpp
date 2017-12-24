#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int diagDiff(int n, vector<vector<int>> a) {
    int sumLeftDiag = 0;
    int sumRightDiag = 0;
    
    for (int i = 0; i < n; i++) {
        sumLeftDiag += a[i][i];
        sumRightDiag += a[i][(n - 1) - i];
    }
    
    return abs(sumLeftDiag - sumRightDiag);
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    cout << diagDiff(n, a);
    
    return 0;
}
