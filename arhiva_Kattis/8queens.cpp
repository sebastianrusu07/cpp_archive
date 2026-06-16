#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> table;

    for(int i=0;i<8;i++)
    {
        string row;
        cin >> row;
        table.push_back(row);
    }

    int cnt=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if (table[i][j] != '*') continue;

            cnt++;
            int tempI,tempJ;

            tempI=i+1;
            while (tempI<8)
            {
                if (table[tempI][j]=='*')
                {
                    cout << "invalid";
                    return 0;
                }
                tempI++;
            }

            tempI=i-1;
            while (tempI>=0)
            {
                if (table[tempI][j]=='*')
                {
                    cout << "invalid";
                    return 0;
                }
                tempI--;
            }

            tempJ=j+1;
            while (tempJ<8)
            {
                if (table[i][tempJ]=='*')
                {
                    cout << "invalid";
                    return 0;
                }
                tempJ++;
            }

            tempJ=j-1;
            while (tempJ>=0)
            {
                if (table[i][tempJ]=='*')
                {
                    cout << "invalid";
                    return 0;
                }
                tempJ--;
            }

            tempJ=j+1;
            tempI=i-1;
            while (tempJ<8 && tempI>=0)
            {
                if (table[tempI][tempJ]=='*')
                {
                    cout << "invalid";
                    return 0;
                }
                tempJ++;
                tempI--;
            }

            tempJ=j+1;
            tempI=i+1;
            while (tempJ<8 && tempI<8)
            {
                if (table[tempI][tempJ]=='*')
                {
                    cout << "invalid";
                    return 0;
                }
                tempJ++;
                tempI++;
            }

            tempJ=j-1;
            tempI=i+1;
            while (tempJ>=0 && tempI<8)
            {
                if (table[tempI][tempJ]=='*')
                {
                    cout << "invalid";
                    return 0;
                }
                tempJ--;
                tempI++;
            }

            tempJ=j-1;
            tempI=i-1;
            while (tempJ>=0 && tempI>=0)
            {
                if (table[tempI][tempJ]=='*')
                {
                    cout << "invalid";
                    return 0;
                }
                tempJ--;
                tempI--;
            }
        }
    }
    if(cnt==8) cout << "valid";
    else cout << "invalid";
    return 0;
}