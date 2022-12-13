#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int hun, ten, one;

    hun = b/100;
    ten = (b%100) / 10;
    one = (b%100) % 10;

    cout << a*one << "\n" << a*ten << "\n" << a*hun << "\n" << a*b;

    return 0;
}