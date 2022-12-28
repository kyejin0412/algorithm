#include <iostream>
using namespace std;

int main() {
    int N;
    double avg = 0;
    double avg_sum = 0;

    cin >> N;

    double score[N] = {};
    double biggest = 0;
    
    for (int i = 0; i < N; i++) {
        cin >> score[i];
        if (score[i] > biggest) {
            biggest = score[i];
        }
    }

    for (int i = 0; i < N; i++) {
        avg_sum += (score[i]/biggest)*100;
    }

    avg = avg_sum/N;

    cout << avg;

    return 0;
}