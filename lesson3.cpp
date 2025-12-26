#include <iostream>
#include <utility>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <vector>
#include "stdio.h"

using namespace std;

// void CheckCool() {
//     if(tem > 100.0) {
//         cout << "Energy Cooling Activated\n";
//     } else {
//         cout << "Temperature normal. No emergency cooling required.\n"
//     }
// }

int main() {
    // map <string, vector <pair<int, unordered_map <char, double>>>> complexType;

    // map <string, vector <pair<int, unordered_map <char, double>>>>::iterator;
    // it = complexType.begin();

    // auto it = complexType.begin();

    //Direct Initialisation

    vector<int> numbers{1, 2, 3};

    int numOne = 12.0;
    int numTwo(12.0);//same effect
    cout << 'numOne is' << numOne << '\n';
    cout << 'numTwo is' << numTwo << '\n';


    // int criticalTem(100.8);
    // Reactor reactor(criticalTem);
    // reactor.CheckCool();

    int tem1{12};//uniform initialisation
    float tem2{12.0};//doesn't support narrowing conversion
    cout << tem1 << '\n';
    cout << tem2 << '\n';


    
    return 0;
}