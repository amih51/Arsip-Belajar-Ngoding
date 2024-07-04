#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Team {
    int rank;
    string name;
    string institution;
    bool isEligible;

    bool operator<(const Team& other) const {
        return rank > other.rank;
    }
};

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<Team> teams(N);

    for (int i = 0; i < N; i++) {
        cin >> teams[i].name >> teams[i].institution;
        teams[i].rank == i+1;
        teams[i].isEligible = (i < M) || (i < M + K && i == M);
    }

    sort(teams.begin(), teams.end());

    int count = 0; 
    for (int i = 0; i < N; i++) {
        if (teams[i].isEligible) {
            count++; 
        }
    }

    cout << count << endl;

    for (int i = 0; i < N; i++) {
        if (teams[i].isEligible) {
            cout << teams[i].name << endl;
        }
    }

    return 0;
}
