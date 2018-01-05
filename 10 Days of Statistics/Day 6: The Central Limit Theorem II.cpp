#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

double normalDist(double x, double mean, double stdDev) {
    return 0.5*(1 + erf((x - mean) / (stdDev * pow(2.0,0.5))));
}

int main() {
    double numTickets, numStudents, mean, stdDev;
    cin >> numTickets >> numStudents >> mean >> stdDev;
    
    cout << fixed << setprecision(4) << normalDist(numTickets, (numStudents * mean), (sqrt(numStudents) * stdDev)) << endl;
    
    return 0;
}
