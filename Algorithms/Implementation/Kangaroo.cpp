#include <bits/stdc++.h>

using namespace std;

// solving for i in the equation: x1 + (v1 * i) = x2 + (v2 * i), which simplifies to: i = (x1 - x2) / (v2 - v1)
string kangaroo(int x1, int v1, int x2, int v2) {
    double num = static_cast<double>(x1 - x2) / (v2 - v1);
    if ((x1 > x2 && v1 > v2) || (x1 < x2 && v1 < v2) || (v1 == v2 && x1 != x2))
        return "NO";
    else if ( num >= 0 && num == floor(num))
        return "YES";
    else
        return "NO";
}

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
