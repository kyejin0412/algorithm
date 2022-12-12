#include <iostream>
using namespace std;

int main() {

    int input;
    int biggest = 0;
    int index;

    for (int i = 0; i < 9; i++) {
        cin >> input; 
        if (input > biggest) {
            biggest = input;  
            index = i+1;
        }
    }

    cout << biggest << "\n" << index << endl;

    return 0;
}
