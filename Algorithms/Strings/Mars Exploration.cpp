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

int countingErrors(string s) {
    int numErrors = 0;
    for (int i = 0; i < s.length() - 2; i += 3) {
        if (s[i] != 'S')
            numErrors++;
        if (s[i + 1] != 'O')
            numErrors++;
        if (s[i + 2] != 'S')
            numErrors++;
    }
    
    return numErrors;
}

int main(){
    string s;
    cin >> s;
    
    cout << countingErrors(s) << endl;
    
    return 0;
}
