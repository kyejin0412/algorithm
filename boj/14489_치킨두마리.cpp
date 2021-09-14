#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int A = 0, B = 0, C = 0;

    cin >> A >> B >> C;

    if (2 * C <= A + B)
    {
        cout << A + B - 2 * C << "\n";
    }

    else
    {
        cout << A + B << "\n";
    }

    return 0;
}