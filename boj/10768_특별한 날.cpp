#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int month = 0, date = 0;

    cin >> month >> date;

    if (month < 2)
    {
        cout << "Before\n";
    }

    else if (month == 2)
    {
        if (date < 18)
        {
            cout << "Before\n";
        }
        else if (date == 18)
        {
            cout << "Special\n";
        }
        else
        {
            cout << "After\n";
        }
    }

    else
    {
        cout << "After\n";
    }

    return 0;
}