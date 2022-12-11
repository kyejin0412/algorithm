#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N-1; i++) {
        for (int s = N - i - 1; s > 0; s--) {
            cout << " ";
        }

        for (int j = 0; j < 2*i + 1; j++) {
            cout << "*";
        }

        cout << endl;
        }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int s = 2*N - 2*i - 1; s > 0; s--) {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}

