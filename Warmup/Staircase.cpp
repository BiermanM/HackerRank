#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printStaircase(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - (i + 1)); j++) {
            cout << " ";
        }
        for (int j = 1; j <= (i + 1); j++) {
            cout << "#";
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    
    printStaircase(n);
    
    return 0;
}
