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

void countFruits(int s, int t, int a, int b, int m, int n, vector<int> apple, vector<int> orange) {
    int fruitOnHouse = 0;
    
    for (int i = 0; i < m; i++) {
        if (a + apple[i] >= s && a + apple[i] <= t)
            fruitOnHouse++;
    }
    cout << fruitOnHouse << endl;
    
    fruitOnHouse = 0;
    for (int i = 0; i < n; i++) {
        if (b + orange[i] >= s && b + orange[i] <= t)
            fruitOnHouse++;
    }
    cout << fruitOnHouse << endl;
}


int main(){
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    
    countFruits(s, t, a, b, m, n, apple, orange);
    
    return 0;
}
