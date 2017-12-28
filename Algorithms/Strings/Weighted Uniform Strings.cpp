#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void getWeights(string s, vector<int> nums) {
    vector<bool> arr((int) 10e7);
    char lastChar = s[0];
    int currStreak = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (i == 0) {
            arr[s[i] - 96] = true;
            currStreak++;
        }
        else if (s[i] == lastChar) {
            currStreak++;
            arr[(s[i] - 96) * currStreak] = true;
        }
        else {
            currStreak = 1;
            arr[s[i] - 96] = true;
            lastChar = s[i];
        }
    }
    
    for (int i = 0; i < nums.size(); i++) {
        if (arr[nums[i]] == true)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<int> nums;
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    
    getWeights(s, nums);
    
    return 0;
}
