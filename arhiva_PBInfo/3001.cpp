#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
using namespace std;

bool isSheRight(long long n, long long answer)
{
    long long correct = n * n + 3 * n + 1;
    return (answer == correct);
}

int main()
{
    int N;
    cin >> N;
    int counter = 0;

    for(int i = 0; i < N; i++)
    {
        long long A, R;
        cin >> A >> R;
        if (isSheRight(A, R))
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}