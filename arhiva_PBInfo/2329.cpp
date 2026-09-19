#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;

bool isComposite[20005];

void init()
{
    for (int i = 2; i <= 20005; i++)
    {
        if (isComposite[i]) continue;
        for (int j = i+i; j <= 1000000; j += i)
        {
            isComposite[j] = true;
        }
    }
}

int main()
{
    init();
    int n;
    cin >> n;

    int numbers[100005];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int validPairs = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j=i+1; j < n; j++)
        {
            if (!isComposite[numbers[i]+numbers[j]])
            {
                validPairs++;
            }
        }
    }
    cout << validPairs;
    return 0;
}