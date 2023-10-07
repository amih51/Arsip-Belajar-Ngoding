#include <iostream>
using namespace std;

int main(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int t, count = 0; scanf("%d", &t);
        if(t < 2){
            count++;
        }
        for(int j = 2; 2*j <= t; j++){
            if(t % j == 0){
                count++;
            }
            if(count > 2) break;
        }
        if(count <= 2){
            printf("YA\n");
        } else{
            printf("BUKAN\n");
        }
    }
}