#include <iostream>
using namespace std;

int main() {
    int hour, min, cook;

    cin >> hour >> min >> cook;

    if (cook >= 60) {
        min += cook % 60;
        if (min >= 60) {
            hour++;
            min = min % 60;
        }

        hour += cook/60;
        if (hour >= 24) {
            hour = hour - 24;
        }
    }

    else {
        min += cook;
        if (min >= 60) {
            hour++;
            min = min % 60;
        }
        if (hour >= 24) {
            hour = hour - 24;
        }
    }

    cout << hour << " " << min;

    return 0;
}