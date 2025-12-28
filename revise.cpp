#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;

using results = pair <double, double>;
using Solution = pair <bool, results>;

Solution SolveQuadraticEquaion(double a, double b, double c) {
    if(pow(b, 2) - 4 * a * c >= 0) return {true, {(-b+sqrt(pow(b, 2) - 4 * a * c)) / (2 * a), (-b-sqrt(pow(b, 2) - 4 * a * c)) / (2 * a)}};
    else return {false, {NAN, NAN}};
} 

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    auto results = SolveQuadraticEquaion(a, b, c);
    cout << "x1 = " << results.second.first << " x2 = " << results.second.second;
}