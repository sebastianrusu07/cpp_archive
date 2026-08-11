#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

ifstream cin("nyk.in");
ofstream cout("nyk.out");

using namespace std;

int cmmdc(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return cmmdc(b,a%b);
}

bool isPrime(int n)
{
    if (n==1) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    for (int i=3;i*i<=n;i+=2)
    {
        if (n%i==0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    vector<vector<int>> grid;
    int biggestGcd=0,streetPos=-1;
    for (int i=0;i<n;i++)
    {
        int m;
        cin >> m;

        int gcd;
        cin >> gcd;
        vector<int> row={gcd};
        for (int j=1;j<m;j++)
        {
            int nr;
            cin >> nr;
            gcd=cmmdc(gcd,nr);
            row.push_back(nr);
        }
        if (gcd>=biggestGcd)
        {
            biggestGcd=gcd;
            streetPos=i;
        }
        grid.push_back(row);
    }



    int biggestPrime=0,housePos=0;
    for (int i=0;i<grid[streetPos].size();i++)
    {
        if (grid[streetPos][i]>=biggestPrime && isPrime(grid[streetPos][i]))
        {
            biggestPrime=grid[streetPos][i];
            housePos=i;
        }
    }
    if (biggestPrime==0)
    {
        cout << "Nu am gasit casa!";
        return 0;
    }
    cout << streetPos+1 << ' ' << housePos+1 << '\n' << biggestPrime;
    return 0;
}