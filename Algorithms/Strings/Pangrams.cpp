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

string convertToLowercase(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] > 64 && s[i] < 91)
            s[i] += 32;
    }
    
    return s;
}

bool isPangram(string s) {
    string newS = convertToLowercase(s);
    bool alphabet[26] = {false};
    
    for (int i = 0; i < newS.length(); i++) {
        if (newS[i] != ' ')
            alphabet[newS[i] - 97] = true;
    }
    
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == false)
            return false;
    }
    return true;
}

int main() {
    string s;
    getline(cin, s);
    
    bool isP = isPangram(s);
    if (isP == true)
        cout << "pangram" << endl;
    else
        cout << "not pangram" << endl;
    
    return 0;
}
