#include <iostream>
using namespace std;

int main() {
    int T, H, W, N;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;

        if (N%H != 0) {
            cout << (N%H)*100 + (N/H) + 1 << endl;
        }
        else if (N%H == 0) {
            cout << (H*100) + (N/H) << endl;
        }
    }
    
    return 0;
}