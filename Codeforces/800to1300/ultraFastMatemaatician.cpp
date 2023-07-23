#include <iostream>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    string result;
    for (int i = 0; i < a.size(); i++){
        if (a[i]==b[i]){
            result.push_back('0');
        } else {
            result.push_back('1');
        }
    }
    cout << result;
}