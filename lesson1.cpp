// A valid C++ Program
#include <iostream>
#include <string>
#include <memory>

using namespace std;

void increment(int *p) {
    (*p)++;
}

int main() {
    auto str = std::make_unique<std::string>("Hello World");
    std::cout << *str << std::endl;
    int a = 10;
    int *p = &a;
    *p = 20;
    cout << a << '\n';
    int arr[] = {1, 2, 3};
    int *b = arr;
    cout << *b << '\n';
    b++;
    cout << *b << '\n';
    int c = 10;
    increment(&c);
    cout << c << '\n';

    return 0;
}