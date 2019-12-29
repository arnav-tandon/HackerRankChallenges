#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n; i++){
        int k;
        cin>>k;
        arr[i] = k;
    } 
    int f = n - 1; 
    for(int j = f;j >= 0; j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}
