#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int science[4], society[2], smallestScience = 101, smallestSociety = 101, sum = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> science[i];

        if (smallestScience > science[i])
        {
            smallestScience = science[i];
        }

        sum += science[i];
    }

    for (int i = 0; i < 2; i++)
    {
        cin >> society[i];

        if (smallestSociety > society[i])
        {
            smallestSociety = society[i];
        }

        sum += society[i];
    }

    cout << sum - smallestScience - smallestSociety << "\n";
    return 0;
}