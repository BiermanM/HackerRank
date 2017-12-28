#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    vector<int> occurrences = {0,0,0,0,0,0};
    for (int i = 0; i < n; i++)
        occurrences[ar[i]] += 1;
    
    int highestIndex = 0;
    for (int i = 1; i < 6; i++) {
        if (occurrences[i] > occurrences[highestIndex])
            highestIndex = i;
    }
    
    return highestIndex;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
