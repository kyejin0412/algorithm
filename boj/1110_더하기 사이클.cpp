#include <iostream>
using namespace std;

int main() {
    int N, new_N;
    int count = 0;

    cin >> N;

    new_N = N;

    while (true) {
        count++;
        new_N = (new_N%10)*10 + (new_N/10 + new_N%10)%10;

        if (N == new_N) {
            break;
        }
    }
    
    cout << count;

    return 0;
}