#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int capacity = 0;
    int max = 0;
    for(int i = 0; i < n; i++){
        int out, in;
        cin >> out >> in;
        capacity += in;
        capacity -= out;
        if(capacity > max){
            max = capacity;
        }
    
    }
    cout << max;
}