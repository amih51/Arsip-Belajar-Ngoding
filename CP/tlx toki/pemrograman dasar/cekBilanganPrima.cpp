#include <iostream>
using namespace std;

int main(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int t, count = 0; scanf("%d", &t);
        if(t < 2){
            count++;
            printf("BUKAN\n");
        }
        for(int j = 2; j*j <= t; j++){
            if(t % j == 0){
                printf("BUKAN\n");
                count++;
                break;
            }
        }
        if(count == 0) printf("YA\n");
    }
}