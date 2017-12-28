#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void caesarCipher(string s, int n, int k) {
    string newStr = "";
    int num = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] < 65 || (s[i] > 90 && s[i] < 97) || s[i] > 122)
            newStr += s[i];
        else if (s[i] <= 90) {
            num = s[i] + k;
            while (num > 90)
                num -= 26;
            
            newStr += (char) num;
        }
        else if (s[i] <= 122) {
            num = s[i] + k;
            while (num > 122)
                num -= 26;
            
            newStr += (char) num;
        }
    }
    
    cout << newStr << endl;
}

int main(){
    int n, k;
    cin >> n;
    string s;
    cin >> s;
    cin >> k;
    
    caesarCipher(s, n, k);
    
    return 0;
}
