#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    char construct[k];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            char input;
            cin >> input;
            if (input != '.')
            {
                construct[j] = input;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << construct[i];
    }
}