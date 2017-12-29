#include <bits/stdc++.h>

using namespace std;

string isPerfect(string s) {
    if (s.length() == 1 || s[0] == '0')
        return "NO";
    else {
        int initNumLen = 1;
        int numLen = 1;
        bool isCorrect = true;
        
        while (initNumLen < s.length()) {
            numLen = initNumLen;
            
            int i = numLen;
            long int lastNum = atol(s.substr(0, numLen).c_str());

            while(i < s.length()) {
                if (to_string(lastNum + 1).length() > to_string(lastNum).length())
                    numLen++;
                
                if (s[i] == '0') {
                    isCorrect = false;
                    break;
                }
                else if (atol(s.substr(i, numLen).c_str()) == lastNum + 1) {
                    lastNum = atol(s.substr(i, numLen).c_str());
                    i += numLen;
                    if (i >= s.length()) {
                        isCorrect = true;
                        break;
                    }
                }
                else {
                    isCorrect = false;
                    break;
                }
            }
            
            if (isCorrect == true)
                return "YES " + s.substr(0, initNumLen);
            else
                initNumLen++;
        }
        
        return "NO";
    }
}

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        
        cout << isPerfect(s) << endl;
    }
    return 0;
}
