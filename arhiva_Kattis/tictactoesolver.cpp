#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    string v[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }

    for(int i = 0; i < 3; i++)
    {
        if (v[i][0] == 'X' && v[i][1] == 'X' && v[i][2] == 'X')
        {
            cout << 'X';
            return 0;
        }
        if (v[i][0] == 'O' && v[i][1] == 'O' && v[i][2] == 'O')
        {
            cout << 'O';
            return 0;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if (v[0][i] == 'X' && v[1][i] == 'X' && v[2][i] == 'X')
        {
            cout << 'X';
            return 0;
        }
        if (v[0][i] == 'O' && v[1][i] == 'O' && v[2][i] == 'O')
        {
            cout << 'O';
            return 0;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if (v[i][i]!= 'X') break;
        if (i==2)
        {
            cout << 'X';
            return 0;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if (v[i][i]!= 'O') break;
        if (i==2)
        {
            cout << '0';
            return 0;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if (v[i][3-i-1]!= 'X') break;
        if (i==2)
        {
            cout << 'X';
            return 0;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if (v[i][3-i-1]!= 'O') break;
        if (i==2)
        {
            cout << 'O';
            return 0;
        }
    }
    cout << "N";
    return 0;
}