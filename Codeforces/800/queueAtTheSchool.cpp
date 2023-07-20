#include <iostream>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    string str;
    cin >> str;

    for(int j = 0; j < t; j++){
        for(int i = 1; i < n; i++){
            if(str[i] == 'G' && str[i-1] =='B'){
                char temp = str[i-1];
                str[i-1] = str[i];
                str[i] = temp;
                i++;
            }
        }
    }
    cout << str << endl;
    return 0;

}