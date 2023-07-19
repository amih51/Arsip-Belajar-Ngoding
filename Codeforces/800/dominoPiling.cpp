#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int total = 0;
    for(int i=m; i>0; i--){
        if(i>=2){
            i--;
            for(int j=n; j>0; j--){
                total++;
            }
        }else if(i==1){
    //cout << "tes";

            for(int j=n; j>1; j-=2){
                total++;
            }
        }
    }
    cout << total;
}