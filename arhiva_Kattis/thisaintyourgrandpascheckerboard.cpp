#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        int black=0,white=0;
        int streak=0;
        char streakChar='A';
        for(int j=0; j<n; j++)
        {
            if(a[i][j] == 'B')
            {
                black++;
            }else
            {
                white++;
            }
            if (streakChar==a[i][j])
            {
                streak++;
            }else
            {
                streakChar=a[i][j];
                streak=1;
            }
            if (streak>=3)
            {
                cout << 0;
                return 0;
            }
        }
        if (black!=white)
        {
            cout << 0;
            return 0;
        }
    }

    for(int i=0; i<n; i++)
    {
        int black=0,white=0;
        int streak=0;
        char streakChar='A';
        for(int j=0; j<n; j++)
        {
            if(a[j][i] == 'B')
            {
                black++;
            }else
            {
                white++;
            }
            if (streakChar==a[j][i])
            {
                streak++;
            }else
            {
                streakChar=a[j][i];
                streak=1;
            }
            if (streak>=3)
            {
                cout << 0;
                return 0;
            }
        }
        if (black!=white)
        {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}

