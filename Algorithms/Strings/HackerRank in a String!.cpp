#include <bits/stdc++.h>

using namespace std;

string hackerrankInString(string s) {
    vector<char> word = {'k', 'n', 'a', 'r', 'r', 'e', 'k', 'c', 'a', 'h'};
    for (int i = 0; i < s.length(); i++) {
        if (word.size() == 0)
            break;
        else if (s[i] == word[word.size() - 1])
            word.pop_back();
    }
    
    if (word.size() == 0)
        return "YES";
    else
        return "NO";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = hackerrankInString(s);
        cout << result << endl;
    }
    return 0;
}
