#include <bits/stdc++.h>

using namespace std;

void bonAppetit(int n, int k, int b, vector <int> ar) {
    int b_charged = 0;
    for (int i = 0; i < n; i++) {
        if (i != k)
            b_charged += ar[i];
    }
    b_charged /= 2;
    
    if (b == b_charged)
        cout << "Bon Appetit" << endl;
    else
        cout << to_string(b - b_charged) << endl;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
    bonAppetit(n, k, b, ar);
    return 0;
}
