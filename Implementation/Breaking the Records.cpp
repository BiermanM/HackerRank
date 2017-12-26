#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    int lowest = s[0];
    int highest = s[0];
    vector<int> num = {0, 0};
    
    for (int i = 1; i < s.size(); i++) {
        if (s[i] < lowest) {
            num[1]++;
            lowest = s[i];
        }
        if (s[i] > highest) {
            num[0]++;
            highest = s[i];
        }
    }
    
    return num;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
