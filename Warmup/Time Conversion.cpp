#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    int hour = atoi(s.substr(0, 2).c_str());
    
    if (s.substr(8, 2) == "AM" && hour == 12)
        hour = 0;
    else if (s.substr(8, 2) == "PM" && hour != 12)
        hour += 12;
    
    if (hour < 10)
        return "0" + to_string(hour) + s.substr(2, 6);
    else
        return to_string(hour) + s.substr(2, 6);
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
