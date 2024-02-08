#include <iostream>
using namespace std;

int main() {
    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    int numAlpha[alphabet.length()];
    fill_n(numAlpha, alphabet.length(), -1);

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < alphabet.length(); j++) {
            if (s[i] == alphabet[j]) {
                if (numAlpha[j] == -1) {
                    numAlpha[j] = i;
                }
                break;
            }
        }
    }

    for (int i = 0; i < alphabet.length(); i++) {
        cout << numAlpha[i] << " ";
    }

    cout << endl;

    return 0;
}
