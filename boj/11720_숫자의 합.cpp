#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, sum = 0;
    string S;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> S;
        sum += S[i] - '0'; //아스키코드 이용해서 -'0' 하면 문자로 된 숫자가 정수가 됨.
    }
    
    cout << sum;

    return 0;
}