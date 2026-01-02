#include <iostream>
#include <vector>
#include <map>
#include <set> 
using namespace std;

void receivePrice(vector<double>& prices, double price) {
    
}

int main() {
    // set<int> mySet;
    // //insert() erase() find() size() empty()
    // mySet.insert(10);
    // mySet.insert(12);
    // for(int num: mySet) {
    //     cout << num << " ";
    // }
    // cout << '\n';
    // mySet.erase(12);
    // if(mySet.find(12)== mySet.end()) {
    //     cout << "12 is no longer in mySet" << endl;
    // }
    // if(mySet.empty()) cout << "This set is empty";
    // else cout << "This set is not empty";

    //The C++ Standard Template Library(STL)
    // (std::)vector set stack queue map unordered_map unordered_set priority_queue deque array
    //Space is time!

    // vector<int> vec {1, 2, 3, 4};
    // vec.push_back(5);
    // vec.push_back(6);
    
    // for(size_t i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << " ";
    // }
    // int n;
    // cin >> n >> k;
    // vector<int> v;//empty vector
    // vector<int> v (n);//有n个0
    // vector<int> v1(n, k);//有n个k

    // vector<int> v {1, 2, 3, 4};
    // //push_back() clear() empty()
    // v.push_back(5);
    // v.push_back(6);
    // v.clear();
    // int k = v.at(1);
    // cout << k;

    vector<int> v1 {1, 2, 3, 4, 5};
    for(const auto& num : v1) cout << num << " ";
    v1.clear();
    if(v1.empty()) cout << "empty" << '\n';

    


    return 0;
}