#include<iostream>
#include<vector>

using namespace std;

class ms {
    private:
        vector<int> v1;
        void mergeSort(int l, int r) {
            if(r - l <= 1) return;
            int mid = (l + r) / 2;
            mergeSort(l, mid);
            mergeSort(mid, r);
            merge(l, mid, r);
        }

        void merge(int l, int mid, int r) {
            vector<int> tmp = v1;
            int i = l;
            int j = mid;
            int k = l;
            while(i < mid && j < r) {
                if(tmp[i] > tmp[j]) v1[k++] = tmp[j++];
                else v1[k++] = tmp[i++];
            }

            while(i < mid) v1[k++] = tmp[i++];
            while(j < r) v1[k++] = tmp[j++];
        }
    
        public:
            ms(vector<int> v): v1(v) {}
            void print() {
                mergeSort(0, v1.size());
                for(int n: v1) cout << n << ' ';
                cout << '\n';
            }
};



int main() {
    vector<int> exArr = {57,2,34,51,3,4,6};
    for(int n: exArr) cout << n << ' ';
    cout << '\n';
    ms m = ms(exArr);
    m.print();
    return 0;
}