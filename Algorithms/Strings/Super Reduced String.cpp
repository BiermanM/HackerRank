#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    int i = 0;
    while (i < s.length()) {
        if (i == s.length() - 1)
            break;
        else if (s[i] == s[i + 1]) {
            s = s.substr(0, i) + s.substr(i + 2);
            i--;
        }
        else
            i++;
        
        if (i < 0)
            i = 0;
    }
    
    if (s.length() == 0)
        s = "Empty String";
    
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
