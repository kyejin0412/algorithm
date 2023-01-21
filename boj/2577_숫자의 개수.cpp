#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C, result;
    cin >> A >> B >> C;

    result = A*B*C;
    string str = to_string(result);

    int count[10] = {};

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '0') {
            count[0]++;
        }
        else if (str[i] == '1') {
            count[1]++;
        }
        else if (str[i] == '2') {
            count[2]++;
        }
        else if (str[i] == '3') {
            count[3]++;
        }
        else if (str[i] == '4') {
            count[4]++;
        }
        else if (str[i] == '5') {
            count[5]++;
        }
        else if (str[i] == '6') {
            count[6]++;
        }
        else if (str[i] == '7') {
            count[7]++;
        }
        else if (str[i] == '8') {
            count[8]++;
        }
        else if (str[i] == '9') {
            count[9]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << count[i] << '\n';
    }

    return 0;
}