#include <iostream>
using namespace std;


bool not_self_num[10001] = { false, };

int is_self(int num) {

    int sum = num;
    
    while (num != 0) {
        sum += (num % 10);
        num /= 10;
    }

    return sum;
}

int main() {

    for (int i = 1; i<10001; i++) {
        int not_self = is_self(i);

        if (not_self < 10001) {
            not_self_num[not_self] = true;
        }
    }

    for (int i = 1; i<10001; i++) {
        if(!not_self_num[i]) {
            cout << i << endl;
        }
    }

    return 0;
}