#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int n, vector < int > grades){
    vector<int> result(n);
    int nextMult = 0;
    
    for (int i = 0; i < n; i++) {
        if (grades[i] < 38)
            result[i] = grades[i];
        else {
            nextMult = grades[i] - (grades[i] % 5) + 5;
            if (nextMult - grades[i] < 3)
                result[i] = nextMult;
            else
                result[i] = grades[i];
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(n, grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    
    return 0;
}
