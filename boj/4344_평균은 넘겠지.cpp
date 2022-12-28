#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int C;
    cin >> C;

    double percent[C] = {};

    for (int i = 0; i < C; i++) {
        int N;
        cin >> N;

        double arr[N] = {};
        double sum = 0;
        double avg;

        for (int j = 0; j < N; j++) {
            cin >> arr[j];
            sum += arr[j];
        }

        avg = sum/N;

        double cnt = 0;
        for (int j = 0; j < N; j++) {
            if (arr[j] > avg) {
                cnt++;
            }
        }

        percent[i] = (cnt/N)*100;

        cout << fixed << setprecision(3) << percent[i] << "%" << endl;
    }

    return 0;
}