#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int A1 = 0, B1 = 0, C1 = 0, D1 = 0, A2 = 0, B2 = 0, C2 = 0, D2 = 0;

    cin >> A1 >> B1 >> C1 >> D1 >> A2 >> B2 >> C2 >> D2;

    if (A1 + B1 + C1 + D1 >= A2 + B2 + C2 + D2)
    {
        cout << A1 + B1 + C1 + D1 << "\n";
    }

    else
    {
        cout << A2 + B2 + C2 + D2 << "\n";
    }

    return 0;
}