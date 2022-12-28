#include <iostream>
using namespace std;

int main() {
    int A, B;

    while (cin >> A >> B) { //eof: 입력값의 길이를 모를 때
        cout << A + B << "\n";
    }

    return 0;
}