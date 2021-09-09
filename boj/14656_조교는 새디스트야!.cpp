#include <iostream>
using namespace std;

int main()
{
    int N, students[20000], index = 1, punish = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> students[i];

        if (students[i] != index)
        {
            punish++;
        }

        index++;
    }

    cout << punish << "\n";
    return 0;
}