#include <bits/stdc++.h>

using namespace std;

int getNewStr(char a, char b, string s) {
    int lastChar = 0; // 0 = neither, 1 = a, 2 = b
    int strLen = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == a) {
            if (lastChar == 1)
                return 0;
            else if (lastChar == 0 || lastChar == 2)
                lastChar = 1;
            
            strLen++;
        }
        else if (s[i] == b) {
            if (lastChar == 2)
                return 0;
            else if (lastChar == 0 || lastChar == 1)
                lastChar = 2;
            
            strLen++;
        }
    }
    
    return strLen;
}

int maxLen(string s){
    bool alphabet[26] = {false};
    vector<char> charsPresent;
    
    for (int i = 0; i < s.length(); i++) {
        if (alphabet[s[i] - 97] == false) {
            alphabet[s[i] - 97] = true;
            charsPresent.push_back((char) (s[i]));
        }
    }
    
    int maxChars = 0;
    for (int i = 0; i < charsPresent.size(); i++) {
        for (int j = 0; j < charsPresent.size(); j++) {
            if (i != j && i < j) {
                int newStr = getNewStr(charsPresent[i], charsPresent[j], s);
                if (newStr > maxChars)
                    maxChars = newStr;
            }
        }
    }
    
    return maxChars;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << to_string(maxLen(s)) << endl;
    
    return 0;
}
