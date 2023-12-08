#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        int size = arr[i].size();
        if(size>10){
            cout << arr[i][0] << size-2 << arr[i][size-1] << endl;
        }else{
            cout << arr[i] << endl;
        }
    }
}