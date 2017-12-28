#include <bits/stdc++.h>

using namespace std;

string reverse(string s) {
    string newStr = "";
    while (s.length() != 0) {
        newStr += s[s.length() - 1];
        s = s.substr(0, s.length() - 1);
    }
    
    return newStr;
}

string funnyString(string s){
    string r = reverse(s);
    
    for (int i = 1; i < s.length(); i++) {
        if (abs(s[i] - s[i - 1]) != abs(r[i] - r[i - 1]))
            return "Not Funny";
    }
    
    return "Funny";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}
