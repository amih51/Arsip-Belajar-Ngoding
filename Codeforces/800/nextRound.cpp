#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    int hasil = 0;
    for(int i=0; i<n; i++){
        if(num[i]>=num[k-1] && num[i]>0){
            hasil++;
        }

    }
    cout << hasil;
}