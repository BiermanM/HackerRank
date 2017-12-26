#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    int numWays = 0, sum = 0;
    for (int i = 0; i < n - m + 1; i++) {
        for (int j = 0; j < m; j++)
            sum += s[i + j];
        
        if (sum == d)
            numWays++;
        
        sum = 0;
    }
    
    return numWays;
}

int main() {
    int n, d, m;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
