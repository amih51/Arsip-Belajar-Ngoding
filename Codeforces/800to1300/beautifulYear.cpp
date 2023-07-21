#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main(){
    string n;
    cin >> n;

    int next = 0;
    int temp = stoi(n);
    int size = n.size();
    unordered_set<char> set;
    while(next < stoi(n)){
        temp += 1;
        set.clear();
        for (char c : to_string(temp)){
            set.insert(c);
        }
        if(size == set.size()){
            next = temp;
        }
    }
    cout << next << endl;
    
    
}