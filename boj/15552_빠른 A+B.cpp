#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    int a[T] = {};
    int b[T] = {};

    for (int i = 0; i < T; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < T; i++) {
        cout << a[i] + b[i] << "\n";
    }

    return 0;
}