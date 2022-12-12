#include <iostream>
#include <array>
using namespace std;

int main() {

    int N, X;
    cin >> N >> X;

    int arr[N] = {};
    int min_arr[N] = {};
    int index = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];   
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] < X) {
            min_arr[index] = arr[i];
            index++;
        }
            
    }

    int i = 0;
    while (min_arr[i] != 0) {
        cout << min_arr[i] << " ";
        i++;
    }

    return 0;
}

