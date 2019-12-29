#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    int a;
    char ch;
    bool k = true;
    char comma = ',';
    vector<int> arr;
    while(k){
        ch='a';
        ss>>a>>ch;
        arr.push_back(a);
        if(ch!=comma){
            k = false;
        }
        
    }
    return arr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

