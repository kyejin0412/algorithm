#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

long long solution(int a, int b)
{
    long long answer = 0;

    if (a == b)
    {
        answer = a;
    }

    int i = 0;
    while ((a < b) && (i <= abs(a - b)))
    {
        answer += a + i;
        i++;
    }

    while ((a > b) && (i <= abs(a - b)))
    {
        answer += b + i;
        i++;
    }
    return answer;
}