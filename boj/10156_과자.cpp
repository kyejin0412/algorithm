#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int price = 0, num = 0, allowance = 0;

    cin >> price >> num >> allowance;

    if (price * num - allowance <= 0)
    {
        cout << 0 << "\n";
    }

    else
    {
        cout << price * num - allowance << "\n";
    }

    return 0;
}