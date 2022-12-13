#include <iostream>
using namespace std;

int main() {

    int X, N;

    cin >> X >> N;

    int a[N] = {};
    int b[N] = {};

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }
    
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += a[i] * b[i];
    }
    
    if (sum == X) {
        cout << "Yes";
    }

    else {
        cout << "No";
    }
    return 0;
}
