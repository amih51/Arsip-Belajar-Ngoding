#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int temp = n;
        int x = 0;
        for(int j=0; j<temp; j++){
            if(j%2==0){
                cout << x + 1 + i;
            }else{
                x = n * (j+1);
                cout << x - i;
            }
            if(j!=temp){
                cout << " ";
            }
        }
        cout << "\n";
        n = temp;
    }
}