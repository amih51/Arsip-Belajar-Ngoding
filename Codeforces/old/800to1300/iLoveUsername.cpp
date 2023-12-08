#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int result = 0;
    int min, max;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if (i==0){
            min = temp;
            max = temp;
        }else{
            if (temp>max){
                max = temp;
                result++;
            }else if(temp<min){
                min = temp;
                result++;
            }
        }
    }
    cout << result;
}