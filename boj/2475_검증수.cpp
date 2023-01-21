#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, C, D, E, num;
    cin >> A >> B >> C >> D >> E;

    num = pow(A, 2) + pow(B, 2) + pow(C, 2) + pow(D, 2) + pow(E, 2);
    cout << num%10;
    
    return 0;
}