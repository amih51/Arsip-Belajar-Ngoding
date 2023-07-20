#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int arr[a];
    int width = a;
    for(int i = 0; i < a; i++){
        cin >> arr[i];
        if(arr[i] > b){
            width++;
        }
    }
    cout << width << endl;
}