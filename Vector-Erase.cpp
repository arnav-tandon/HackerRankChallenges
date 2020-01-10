#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x, p, q, r;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++i){
        cin >> x;
        a.push_back(x);
    }  
    cin >> p;
    a.erase(a.begin() + (p - 1));
    cin >> q >> r;
    a.erase(a.begin() + (q - 1),a.begin() + (r - 1));
    cout << a.size() << "\n";
    for(int k = 0; k < a.size(); ++k){
        cout << a[k] << ' ';
    }
    return 0;
}
