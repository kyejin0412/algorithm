#include <iostream>
using namespace std;

int main() {
    int arr[3] = {};
    int biggest = 0;
    int same = 0;

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        if (arr[i] > biggest)
            biggest = arr[i];
    }

    if (arr[0] == arr[1] && arr[0] == arr[2] && arr[1] == arr[2]) {
        cout << 10000 + arr[0] * 1000;
    }

    else if (arr[0] != arr[1] && arr[0] != arr[2] && arr[1] != arr[2]) {
        cout << biggest * 100;
    }

    else {
        if (arr[0] == arr[1]) {
            same = arr[0];
            cout << 1000 + same * 100;
        }
        else if (arr[0] == arr[2]) {
            same = arr[0];
            cout << 1000 + same * 100;
        }
        else if (arr[1] == arr[2]) {
            same = arr[1];
            cout << 1000 + same * 100;
        }
        
    }
    
    return 0;
}