#include <iostream>
#include <unordered_map>
using namespace std;

bool canFormNames(string guest, string host, string pile) {
    unordered_map<char, int> letterCount;

    for (char c:guest){
        letterCount[c]++;
    }
    for (char c:host){
        letterCount[c]++;
    }
    for (char c:pile){
        letterCount[c]--;
    }
    for(auto& entry:letterCount){
        if(entry.second!=0){
            return false;
        }
    }
        return true;
}

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;

    if (canFormNames(guest, host, pile)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
