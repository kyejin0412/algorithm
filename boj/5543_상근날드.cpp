#include <iostream>
using namespace std;

int main()
{
    int burger[3], drink[2], burgerCheapest = 2000, drinkCheapest = 2000;

    for (int i = 0; i < 3; i++)
    {
        cin >> burger[i];

        if (burgerCheapest > burger[i])
        {
            burgerCheapest = burger[i];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        cin >> drink[i];

        if (drinkCheapest > drink[i])
        {
            drinkCheapest = drink[i];
        }
    }

    cout << burgerCheapest + drinkCheapest - 50 << "\n";

    return 0;
}