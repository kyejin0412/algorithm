#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int school[3], smallest = 101, sum = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> school[i];
        sum += school[i];
    }

    if (sum >= 100)
    {
        cout << "OK\n";
    }

    else
    {
        int j = 0;
        for (int i = 0; i < 3; i++)
        {
            if (smallest > school[i])
            {
                smallest = school[i];
                j = i;
            }
        }

        if (j == 0)
        {
            cout << "Soongsil\n";
        }
        else if (j == 1)
        {
            cout << "Korea\n";
        }
        else
        {
            cout << "Hanyang\n";
        }
    }

    return 0;
}