#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s){
    unordered_map<char, int> roman ={
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    int prevValue = 0;

    for(int i = s.size() - 1; i >= 0; i--){
        int value = roman[s[i]];
        if (value < prevValue){
            result -= value;
        }else{
            result += value;
        }
        prevValue = value;
    }

    return result;
}

int main(){
    string s; cin >> s;
    cout << romanToInt(s);
}