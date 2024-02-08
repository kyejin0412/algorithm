#include <iostream>
using namespace std;

int main() {

    int  x, y, w, h;
    cin >> x >> y >> w >> h;

    int fromXNode, fromYNode;

    fromXNode = w - x;
    fromYNode = h - y;
    
    int smallest = x;

    if (fromXNode <= smallest) {
        smallest = fromXNode;
    }

    if (fromYNode <= smallest) {
        smallest = fromYNode;
    }

    if (y <= smallest) {
        smallest = y;
    }

    cout << smallest;
    return 0;
}
