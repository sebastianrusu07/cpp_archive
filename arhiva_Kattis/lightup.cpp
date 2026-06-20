#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;



int main()
{
    int n;
    cin >> n;

    vector<string> grid(n+2);
    grid[0]=string(n+2,'#');
    for (int i = 1; i <= n; i++)
    {
        string row;
        cin >> row;
        row='#'+row+'#';
        grid[i]=row;
    }
    grid[n+1]=string(n+2,'#');

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (grid[i][j] == '?')
            {
                int tempI=i-1;
                while (tempI >= 1 && (grid[tempI][j] == '.' || grid[tempI][j] == ','))
                {
                    grid[tempI][j] = ',';
                    tempI--;
                }
                if (grid[tempI][j] == '?')
                {
                    cout << 0;
                    return 0;
                }

                tempI=i+1;
                while (tempI <= n && (grid[tempI][j] == '.' || grid[tempI][j] == ','))
                {
                    grid[tempI][j] = ',';
                    tempI++;
                }
                if (grid[tempI][j] == '?')
                {
                    cout << 0;
                    return 0;
                }

                int tempJ=j-1;
                while (tempJ >= 1 && (grid[i][tempJ] == '.' || grid[i][tempJ] == ','))
                {
                    grid[i][tempJ] = ',';
                    tempJ--;
                }
                if (grid[i][tempJ] == '?')
                {
                    cout << 0;
                    return 0;
                }

                tempJ=j+1;
                while (tempJ <= n  && (grid[i][tempJ] == '.' || grid[i][tempJ] == ','))
                {
                    grid[i][tempJ] = ',';
                    tempJ++;
                }
                if (grid[i][tempJ] == '?')
                {
                    cout << 0;
                    return 0;
                }

            }else if (grid[i][j]-'0' >= 0 && grid[i][j]-'0' <= 4 )
            {
                int bulbs = (grid[i+1][j]=='?') + (grid[i-1][j]=='?') + (grid[i][j+1]=='?') + (grid[i][j-1]=='?');
                if (bulbs != grid[i][j]-'0')
                {
                    cout << 0;
                    return 0;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (grid[i][j]=='.')
            {
                cout << 0;
                return 0;
            }
        }
    }

    cout << 1;
    return 0;
}