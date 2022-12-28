#include <iostream>
using namespace std;

int main() {
    int count[42] = {};
    int num;
    int answer = 0;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        count[num%42] = 1;
    }
    
    for (int i = 0; i < 42; i++) {
        answer += count[i];
    }

    cout << answer << endl;

    return 0;
}