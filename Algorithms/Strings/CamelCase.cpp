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

int getNumWords(string s) {
    int num = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] < 97)
            num++;
    }
    
    return num;
}

int main(){
    string s;
    cin >> s;
    
    cout << to_string(getNumWords(s)) << endl;
    
    return 0;
}
