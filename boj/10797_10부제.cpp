#include <iostream>
using namespace std;

int main()
{
    int car[5], date = 0, illegal = 0;

    cin >> date;

    for (int i = 0; i < 5; i++)
    {
        cin >> car[i];

        if (date == car[i])
        {
            illegal++;
        }
    }

    cout << illegal << "\n";

    return 0;
}