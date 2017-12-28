#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
    int numBetween = 0;
    bool inBothSets = true;
    
    for (int i = a[a.size() - 1]; i <= b[0]; i++) {
        for (int j = 0; j < a.size(); j++) {
            if (i % a[j] != 0) {
                inBothSets = false;
                break;
            }
        }
        
        if (inBothSets != false) {
            for (int j = 0; j < b.size(); j++) {
                if (b[j] % i != 0) {
                    inBothSets = false;
                    break;
                }
            }
        }
        
        if (inBothSets == true)
            numBetween++;
        
        inBothSets = true;
    }
    
    return numBetween;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
