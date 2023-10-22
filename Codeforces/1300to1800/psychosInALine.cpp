#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    int count = 0;
    vector<int> killer(2), def;
    def = vec;
    while (killer.size() > 1) {
        for (int i = 0; i < def.size(); i++) cout << def[i];
        cout << endl;
        
        killer.clear();
        killer.push_back(def[0]);

        bool process = 0;
        if (def.size() > 1){
            for (int i = def.size(); i < n; i++) {
                if (def[i - 1] < def[i]) {
                    killer.push_back(def[i - 1]);
                    process = 1;
                }
            }
        }

        def = killer;
        if(process) count++;
    }
    cout << count;
}
