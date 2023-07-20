#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    int difficulty = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1){
            difficulty++;
        }
    }
    if(difficulty == 0){
        cout << "EASY";
    }else{
        cout << "HARD";
    }
}