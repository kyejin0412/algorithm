#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int score[N] = {};

    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;

        int plus = 1;

        for (int j = 0; j < S.length(); j++) {
            if (S[j] == 'X') {
                plus = 1;
                continue;
            }
            score[i] += plus;
            plus++;
        }

        cout << score[i] << "\n";
    }

    return 0;
}