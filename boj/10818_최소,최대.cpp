#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N = 0, num[1000000], smallest = 1000001, biggest = -1000001;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num[i];

        if (smallest >= num[i])
        {
            smallest = num[i];
        }

        if (biggest <= num[i])
        {
            biggest = num[i];
        }
    }

    cout << smallest << " " << biggest << "\n";

    return 0;
}