#include <iostream>
#include <string>
#include <utility>
#include <cmath>
#include "stdio.h"

using namespace std;


using Zeros = pair<double, double>;
using Solution  = pair<bool, Zeros>; 
Solution SolveQuadraticEx(double a, double b, double c) {
    if (pow(b, 2) - (4 * a * c) >= 0) {
return {true, { (sqrt(pow(b, 2) - 4 * a * c) - b) / (2 * a), ((-b) - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) }};
    }else {
        return {false, {NAN, NAN}};
    }
}

int solvingAQuadraticEquation(int a, int b, int c) {
    if (pow(b, 2) - (4 * a * c) >= 0) {
        return (sqrt(pow(b, 2) - 4 * a * c) - b) / (2 * a), ((-b) - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    }else {
        cout << "Error" << endl;
    }
}

//improving our code
//The using keyword
pair<bool, pair<double, double>> solveQuadratic(double a, double b, double c) {
    if (pow(b, 2) - (4 * a * c) >= 0) {
return {true, { (sqrt(pow(b, 2) - 4 * a * c) - b) / (2 * a), ((-b) - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) }};
    }else {
        return {false, {NAN, NAN}};
    }
}


struct StandfordID {
    string name;
    string sunet;
    int idNumber;
};

struct order {
    string item;
    int quantity;
};

pair<string, string> Person{"Name", "Age"};
pair<double, double> point {1.0, 1.0};
pair<string, int> dozen {"Eggs", 12};

StandfordID issueNewID() {
    StandfordID id = {"asasd", "asda", 12};
    return id;
}

int f(double foo) {
        return (int)(foo + 0.5);
    }

int main() {
    // cout << "Hello World" << endl;
    // cout << "Welcome to " << endl;
    // for(char ch : "CS106L") {
    //     cout << ch << endl;
    // }
    // double b = 3.2 * 5 - 1;
    // cout << b << endl;
    // cout << f(2.2) << endl;

    // StandfordID id;
    // id.name = "Steve";
    // id.sunet = 'jksf';
    // id.idNumber = 21332;


    //uniform initailisation
    StandfordID Num1 = {"Steve", "sdfas", 1342323};
    pair<string, string> Steve = {"Steve", "17"};


    int a, b, c;
    cin >> a >> b >> c;
    auto result = solveQuadratic(a, b, c);
    if(result.first) {
        cout << "x1 = "<< result.second.first << " x2 = " << result.second.second;
    } else {
        return 0;
    }
    // auto 可以自动指定类型
    // auto i = 1;
    // i = "hello";//不对c++不像python一样
    //C++ is a Compiled, staticall typed language
    /*
    Structs bundle data together into a single object
    std::pair is a general purpose struct with two fields
    #include from the C++ Standard Libaray to use built-in types
        and use the std::prefix too
    Quality of life features to improve your code
        using create type aliases
        auto infers the type of an variable

     */


    return 0;




}
