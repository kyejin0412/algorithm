#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

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

