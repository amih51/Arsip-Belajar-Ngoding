#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    while(n > 1){
        int i = n/2;
        if(n - i != i){
            printf("bukan");
            return 0;
        }
        n /= 2;
    }
    printf("ya");
}